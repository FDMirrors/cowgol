local posix = require("posix")

local out = io.stdout

local function emit(...)
    for _, s in ipairs({...}) do
        if type(s) == "table" then
            emit(unpack(s))
        else
            out:write(s, " ")
        end
    end
end

local function nl()
    out:write("\n")
end

local function rule(rulename, output, inputs, deps, vars)
    emit("build", output, ":", rulename, inputs)
    if deps then
        emit("|", deps)
    end
    nl()
    if vars then
        for k, v in pairs(vars) do
            emit(" ", k, "=", v)
            nl()
        end
    end
end

out:write([[
#############################################################################
###                   THIS FILE IS AUTOGENERATED                          ###
#############################################################################
#
# Don't edit it. Your changes will be destroyed. Instead, edit mkninja.sh
# instead. Next time you run ninja, this file will be automatically updated.

rule mkninja
    command = lua ./mkninja.lua > $out
    generator = true
build build.ninja : mkninja mkninja.lua

OBJDIR = /tmp/cowgol-obj

rule stamp
    command = touch $out

rule bootstrapped_cowgol_program
    command = scripts/cowgol_bootstrap_compiler -o $out $in

rule cowgol_program
    command = scripts/cowgol -a $arch -o $out $in

build $OBJDIR/compiler_for_native_on_native : stamp

rule c_program
    command = cc -std=c99 -Wno-unused-result -g -o $out $in $libs

rule token_maker
    command = gawk -f src/mk-token-maker.awk $in > $out

rule token_names
    command = gawk -f src/mk-token-names.awk $in > $out

build $OBJDIR/token_maker.cow : token_maker src/tokens.txt | src/mk-token-maker.awk
build $OBJDIR/token_names.cow : token_names src/tokens.txt | src/mk-token-names.awk
    
rule run_smart_test
    command = $in && touch $out

rule run_bbctube_test
    command = scripts/bbctube_test $in $badfile $goodfile && touch $out

rule run_stupid_test
    command = scripts/stupid_test $in $badfile $goodfile && touch $out

build $OBJDIR/dependencies_for_bootstrapped_cowgol_program : stamp $
    scripts/cowgol_bootstrap_compiler $
    bootstrap/bootstrap.lua $
    bootstrap/cowgol.c $
    bootstrap/cowgol.h

build $OBJDIR/dependencies_for_cowgol_program : stamp $
    scripts/cowgol

rule mkbbcdist
    command = scripts/mkbbcdist $out

build bin/bbcdist.adf : mkbbcdist | $
    scripts/mkbbcdist $
    bin/mkadfs $
    $OBJDIR/compiler_for_bbc_on_bbc $
    src/arch/bbc/lib/argv.cow $
    src/arch/bbc/lib/fileio.cow $
    src/arch/bbc/lib/mos.cow $
    src/arch/bbc/lib/runtime.cow $
    src/arch/6502/lib/runtime.cow $
    scripts/!boot $
    scripts/precompile $
    demo/tiny.cow

rule pasmo
    command = pasmo $in $out

rule objectify
    command = ./scripts/objectify $symbol < $in > $out

rule lexify
    command = flex -8 -Cem -B -t $in | gawk -f scripts/lexify.awk > $out

rule make_test_things
    command = $in $out > /dev/null

build $OBJDIR/tests/compiler/things.dat $
    $OBJDIR/tests/compiler/strings.dat $
    $OBJDIR/tests/compiler/iops.dat : make_test_things bin/bbc_on_native/init

]])

local NAME
local HOST
local TARGET

local LIBS
local RULE

local GLOBALS
local CODEGEN
local CLASSIFIER
local SIMPLIFIER
local PLACER
local EMITTER

local host_data = {
    ["native"] = function()
        LIBS = {
            "src/arch/bootstrap/host.cow",
			"src/string_lib.cow",
			"src/arch/bootstrap/fcb.cow",
            "src/utils/names.cow"
        }

        RULE = "bootstrapped_cowgol_program"
    end,

    ["bbc"] = function()
        LIBS = {
            "src/arch/bbc/host.cow",
            "src/arch/bbc/lib/mos.cow",
            "src/arch/6502/lib/runtime.cow",
            "src/arch/bbc/lib/runtime.cow",
            "src/arch/common/lib/runtime.cow",
			"src/string_lib.cow",
            "src/arch/bbc/lib/fcb.cow",
            "src/arch/bbc/lib/fileio.cow",
            "src/arch/bbc/lib/argv.cow",
            "src/arch/bbc/names.cow"
        }

        RULE = "cowgol_program"
    end,
}

local target_data = {
    ["bbc"] = function()
        GLOBALS = "src/arch/bbc/globals.cow"
        CLASSIFIER = "src/arch/6502/classifier.cow"
        SIMPLIFIER = "src/arch/6502/simplifier.cow"
        PLACER = "src/arch/6502/placer.cow"
        EMITTER = {
            "src/arch/6502/emitter.cow",
            "src/arch/bbc/emitter.cow"
        }

        CODEGEN = {
            "src/arch/6502/codegen0.cow",
            "src/arch/6502/codegen1.cow",
            "src/arch/6502/codegen2_8bit.cow",
            "src/arch/6502/codegen2_wide.cow",
            "src/arch/6502/codegen2.cow",
        }
    end,

    ["c64"] = function()
        GLOBALS = "src/arch/c64/globals.cow"
        CLASSIFIER = "src/arch/6502/classifier.cow"
        SIMPLIFIER = "src/arch/6502/simplifier.cow"
        PLACER = "src/arch/6502/placer.cow"
        EMITTER = {
            "src/arch/6502/emitter.cow",
            "src/arch/c64/emitter.cow"
        }

        CODEGEN = {
            "src/arch/6502/codegen0.cow",
            "src/arch/6502/codegen1.cow",
            "src/arch/6502/codegen2_8bit.cow",
            "src/arch/6502/codegen2_wide.cow",
            "src/arch/6502/codegen2.cow",
        }
    end,

    ["cpmz"] = function()
        GLOBALS = "src/arch/cpmz/globals.cow"
        CLASSIFIER = "src/arch/z80/classifier.cow"
        SIMPLIFIER = "src/arch/z80/simplifier.cow"
        PLACER = "src/arch/z80/placer.cow"
        EMITTER = {
            "src/arch/z80/emitter.cow",
            "src/arch/cpmz/emitter.cow"
        }

        CODEGEN = {
            "src/arch/z80/codegen0.cow",
            "src/codegen/registers.cow",
            "src/arch/z80/codegen2.cow",
        }
    end
}

local function build_cowgol(files)
    local program = table.remove(files, 1)
    emit("build", "bin/"..NAME.."/"..program, ":", RULE, LIBS, files,
        "|", "$OBJDIR/compiler_for_"..HOST.."_on_native", "$OBJDIR/dependencies_for_"..RULE)
    nl()
    emit(" arch =", HOST.."_on_native")
    nl()
    nl()
end

local function build_c(files, vars)
    local program = table.remove(files, 1)
    rule("c_program", "bin/"..program, files, {}, vars)
    nl()
end

local function build_pasmo(files, vars)
	local obj = table.remove(files, 1)
	rule("pasmo", obj, files, {}, vars)
	nl()
end

local function build_objectify(files, vars)
	local obj = table.remove(files, 1)
	rule("objectify", obj, files, {}, vars)
	nl()
end

local function build_lexify(files, vars)
	local obj = table.remove(files, 1)
	rule("lexify", obj, files, {"scripts/lexify.awk"}, vars)
	nl()
end

local function bootstrap_test(dir, file, extradeps)
    local testname = file:gsub("^.*/([^./]*)%..*$", "%1")
    local testbin = "$OBJDIR/tests/"..dir.."/"..testname
    emit("build", testbin, ":", "bootstrapped_cowgol_program",
        "tests/bootstrap/_test.cow",
        file,
        "|", extradeps)
    nl()
    emit("build", testbin..".stamp", ":", "run_smart_test", testbin)
    nl()
    nl()
end

local function compiler_test(dir, file, extradeps)
    local testname = file:gsub("^.*/([^./]*)%..*$", "%1")
    local testbin = "$OBJDIR/tests/"..dir.."/"..testname
    local goodfile = "tests/"..dir.."/"..testname..".good"
    local badfile = "tests/"..dir.."/"..testname..".bad"
    emit("build", testbin, ":", "bootstrapped_cowgol_program",
        "tests/bootstrap/_test.cow",
        "$OBJDIR/token_names.cow",
        file,
        "|", extradeps)
    nl()
    emit("build", testbin..".stamp", ":", "run_stupid_test",
        testbin, "|",
        goodfile)
    nl()
    emit(" goodfile = "..goodfile)
    nl()
    emit(" badfile = "..badfile)
    nl()
    nl()
end

local function cpu_test(file)
    local testname = file:gsub("^.*/([^./]*)%..*$", "%1")
    local testbin = "$OBJDIR/tests/cpu/"..testname..".6502"
    local goodfile = "tests/cpu/"..testname..".good"
    local badfile = "tests/cpu/"..testname..".bad"

    emit("build", testbin, ":", RULE, LIBS, file,
        "|", "$OBJDIR/compiler_for_bbc_on_native")
    nl()
    emit(" arch =", "bbc_on_native")
    nl()
    emit("build", testbin..".stamp", ":", "run_bbctube_test",
        testbin, "|",
        goodfile,
        "scripts/bbctube_test",
        "bin/bbctube")
    nl()
    emit(" goodfile = "..goodfile)
    nl()
    emit(" badfile = "..badfile)
    nl()
    nl()
end

local function build_cowgol_programs()
    build_cowgol {
        "init",
        GLOBALS,
        "src/utils/stringtablewriter.cow",
        "src/utils/things.cow",
        "src/utils/types.cow",
        "src/utils/iops.cow",
        "src/init/init.cow",
        "$OBJDIR/token_names.cow",
        "src/init/things.cow",
        "$OBJDIR/token_maker.cow",
        "src/init/main.cow",
    }

    build_cowgol {
        "tokeniser2",
        "src/numbers_lib.cow",
        GLOBALS,
        "src/utils/stringtablewriter.cow",
        "src/utils/things.cow",
		"src/tokeniser2/init.cow",
        "$OBJDIR/token_names.cow",
		"src/tokeniser2/emitter.cow",
		"src/tokeniser2/tables.cow",
		"src/tokeniser2/lexer.cow",
        "src/tokeniser2/main.cow",
		"src/tokeniser2/deinit.cow",
    }

    build_cowgol {
        "parser",
        "src/ctype_lib.cow",
        "src/numbers_lib.cow",
        GLOBALS,
        "src/utils/stringtable.cow",
        "src/utils/things.cow",
        "$OBJDIR/token_names.cow",
        "src/utils/types.cow",
        "src/utils/iops.cow",
        "src/parser/init.cow",
        "src/parser/symbols.cow",
        "src/utils/symbols.cow",
        "src/parser/iopwriter.cow",
        "src/parser/tokenreader.cow",
        "src/parser/constant.cow",
        "src/parser/types.cow",
        "src/parser/expression.cow",
        "src/parser/main.cow",
        "src/parser/deinit.cow",
    }

    build_cowgol {
        "blockifier",
        GLOBALS,
        "src/utils/stringtable.cow",
        "src/utils/things.cow",
        "src/utils/types.cow",
        "src/utils/iops.cow",
        "src/utils/iopreader.cow",
        "src/utils/iopwriter.cow",
        "src/utils/symbols.cow",
        "$OBJDIR/token_names.cow",
        "src/blockifier/init.cow",
        "src/blockifier/main.cow",
        "src/blockifier/deinit.cow",
    }

    build_cowgol {
        "typechecker",
        GLOBALS,
        "src/utils/stringtable.cow",
        "src/utils/things.cow",
        "src/utils/types.cow",
        "src/utils/iops.cow",
        "src/utils/iopreader.cow",
        "src/utils/iopwriter.cow",
        "src/utils/symbols.cow",
        "$OBJDIR/token_names.cow",
        "src/typechecker/init.cow",
        "src/typechecker/stack.cow",
        "src/typechecker/main.cow",
        "src/typechecker/deinit.cow",
    }

    build_cowgol {
        "backendify",
        GLOBALS,
        "src/utils/stringtable.cow",
        "src/utils/things.cow",
        "src/utils/types.cow",
        "src/utils/iops.cow",
        "src/utils/iopreader.cow",
        "src/utils/iopwriter.cow",
        "src/utils/symbols.cow",
        "$OBJDIR/token_names.cow",
        "src/backendify/init.cow",
        "src/backendify/temporaries.cow",
        "src/backendify/tree.cow",
        SIMPLIFIER,
        "src/backendify/simplifier.cow",
        "src/backendify/main.cow",
        "src/backendify/deinit.cow",
    }

    build_cowgol {
        "classifier",
        GLOBALS,
        "src/utils/stringtable.cow",
        "src/utils/things.cow",
        "src/utils/types.cow",
        "src/utils/iops.cow",
        "src/utils/iopreader.cow",
        "src/utils/symbols.cow",
        "$OBJDIR/token_names.cow",
        "src/classifier/init.cow",
        "src/classifier/graph.cow",
        CLASSIFIER,
        "src/classifier/subdata.cow",
        "src/classifier/main.cow",
        "src/classifier/deinit.cow",
    }

    build_cowgol {
        "codegen",
        GLOBALS,
        "src/utils/stringtable.cow",
        "src/utils/things.cow",
        "src/utils/types.cow",
        "src/utils/iops.cow",
        "src/utils/iopreader.cow",
        "src/utils/iopwriter.cow",
        "$OBJDIR/token_names.cow",
        "src/utils/symbols.cow",
        "src/codegen/init.cow",
        "src/codegen/queue.cow",
        CODEGEN,
        "src/codegen/rules.cow",
        "src/codegen/main.cow",
        "src/codegen/deinit.cow",
    }

    build_cowgol {
        "placer",
        GLOBALS,
        "src/utils/stringtable.cow",
        "src/utils/things.cow",
        "src/utils/types.cow",
        "src/utils/iops.cow",
        "src/utils/iopreader.cow",
        "src/utils/iopwriter.cow",
        "src/placer/init.cow",
        PLACER,
        "src/placer/main.cow",
        "src/placer/deinit.cow",
    }

    build_cowgol {
        "emitter",
        GLOBALS,
        "src/utils/stringtable.cow",
        "src/utils/things.cow",
        "src/utils/types.cow",
        "src/utils/iops.cow",
        "src/utils/iopreader.cow",
        "src/emitter/init.cow",
        EMITTER,
        "src/emitter/main.cow",
        "src/emitter/deinit.cow",
    }

    build_cowgol {
        "thingshower",
        GLOBALS,
        "src/utils/stringtable.cow",
        "src/utils/things.cow",
        "src/thingshower/thingshower.cow",
    }

    build_cowgol {
        "iopshower",
        GLOBALS,
        "src/utils/stringtable.cow",
        "src/utils/things.cow",
        "src/utils/types.cow",
        "src/utils/iops.cow",
        "src/iopshower/iopreader.cow",
        "src/iopshower/iopshower.cow",
    }
end

-- Build all the combinations of compilers.
for host, hostcb in pairs(host_data) do
    HOST = host
    hostcb()

    for target, targetcb in pairs(target_data) do
        TARGET = target
        if HOST == TARGET then
            NAME = TARGET
        else
            NAME = TARGET.."_on_"..HOST
        end

        rule("stamp", "$OBJDIR/compiler_for_"..TARGET.."_on_"..HOST,
            {
                "bin/"..NAME.."/init",
                "bin/"..NAME.."/tokeniser2",
                "bin/"..NAME.."/parser",
                "bin/"..NAME.."/typechecker",
                "bin/"..NAME.."/backendify",
                "bin/"..NAME.."/blockifier",
                "bin/"..NAME.."/classifier",
                "bin/"..NAME.."/codegen",
                "bin/"..NAME.."/placer",
                "bin/"..NAME.."/emitter",
                "bin/"..NAME.."/iopshower",
                "bin/"..NAME.."/thingshower"
            }
        )
        nl()

        targetcb()
        build_cowgol_programs()
    end
end

-- Build the bootstrap compiler tests.
host_data.native()
for _, file in ipairs(posix.glob("tests/bootstrap/*.test.cow")) do
    bootstrap_test("bootstrap", file)
end

-- Build the compiler logic tests.
host_data.native()
for _, file in ipairs(posix.glob("tests/compiler/*.test.cow")) do
    compiler_test("compiler", file,
        {
            "src/codegen/registers.cow",
            "src/string_lib.cow",
            "src/arch/bootstrap/fcb.cow",
            "src/arch/bbc/globals.cow",
            "src/arch/bbc/host.cow",
            "src/utils/names.cow",
            "src/utils/stringtable.cow",
            "src/utils/things.cow",
            "src/utils/types.cow",
            "src/utils/names.cow",
            "src/utils/iops.cow",
            "$OBJDIR/tests/compiler/things.dat",
            "$OBJDIR/tests/compiler/strings.dat",
            "$OBJDIR/tests/compiler/iops.dat",
        }
    )
end

-- Build the CPU tests.
host_data.bbc()
for _, file in ipairs(posix.glob("tests/cpu/*.test.cow")) do
    cpu_test(file)
end

build_c {
    "bbctube",
    "emu/bbctube/bbctube.c",
    "emu/bbctube/lib6502.c"
}

build_c {
    "mkdfs",
    "emu/mkdfs.c"
}

build_c {
    "mkadfs",
    "emu/mkadfs.c"
}

build_c(
	{
		"cpm",
		"emu/cpm/main.c",
		"emu/cpm/biosbdos.c",
		"emu/cpm/emulator.c",
		"emu/cpm/fileio.c",
		"$OBJDIR/ccp.c",
		"$OBJDIR/bdos.c",
	},
	{
		libs = "-lz80ex -lz80ex_dasm -lreadline"
	}
)

build_pasmo(
	{
		"$OBJDIR/ccp.bin",
		"emu/cpm/ccp.asm"
	}
)

build_objectify(
	{
		"$OBJDIR/ccp.c",
		"$OBJDIR/ccp.bin"
	},
	{
		symbol = "ccp"
	}
)

build_pasmo(
	{
		"$OBJDIR/bdos.bin",
		"emu/cpm/bdos.asm"
	}
)

build_objectify(
	{
		"$OBJDIR/bdos.c",
		"$OBJDIR/bdos.bin"
	},
	{
		symbol = "bdos"
	}
)

build_lexify(
	{
		"src/tokeniser2/tables.cow",
		"src/tokeniser2/lexer.l"
	}
)

