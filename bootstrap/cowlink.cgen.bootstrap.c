#include "cowgol.h"
static i8 workspace[0x018e];
static i1* ws = (i1*)workspace;

// AlignUp workspace at ws+848 length ws+16
void f4(i8* p1 /* out */, i8 p2 /* in */) {
	*(i8*)(intptr_t)(ws+848) = p2; /*in */

	i8 v3 = (i8)(intptr_t)(ws+848);
	i8 v4 = *(i8*)(intptr_t)v3;
	i8 v5 = v4+(+7);
	i8 v6 = v5&(-8);
	i8 v7 = (i8)(intptr_t)(ws+856);
	*(i8*)(intptr_t)v7 = v6;

endsub:;
	*p1 = *(i8*)(intptr_t)(ws+856);
}

// ExitWithError workspace at ws+3112 length ws+0
void f6(void) {

	
exit(1); 


endsub:;
}

// MemSet workspace at ws+856 length ws+24
void f7(i8 p8 /* len */, i1 p9 /* byte */, i8 p10 /* buf */) {
	*(i8*)(intptr_t)(ws+856) = p10; /*buf */
	*(i1*)(intptr_t)(ws+864) = p9; /*byte */
	*(i8*)(intptr_t)(ws+872) = p8; /*len */

	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+856) 
,  
*(i1*)(intptr_t)(ws+864) 
,  
*(i8*)(intptr_t)(ws+872) 
); 


endsub:;
}

// print_char workspace at ws+3144 length ws+1
void f8(i1 p11 /* c */) {
	*(i1*)(intptr_t)(ws+3144) = p11; /*c */

	
putchar( 
*(i1*)(intptr_t)(ws+3144) 
); 


endsub:;
}

// print workspace at ws+3128 length ws+9
void f11(i8 p20 /* ptr */) {
	*(i8*)(intptr_t)(ws+3128) = p20; /*ptr */

c02_0001:;

	i8 v21 = (i8)(intptr_t)(ws+3128);
	i8 v22 = *(i8*)(intptr_t)v21;
	i1 v23 = *(i1*)(intptr_t)v22;
	i8 v24 = (i8)(intptr_t)(ws+3136);
	*(i1*)(intptr_t)v24 = v23;

	i8 v25 = (i8)(intptr_t)(ws+3136);
	i1 v26 = *(i1*)(intptr_t)v25;
	i1 v27 = (i1)+0;
	if (v26==v27) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

	goto c02_0003;

c02_0007:;

c02_0003:;

	i8 v28 = (i8)(intptr_t)(ws+3136);
	i1 v29 = *(i1*)(intptr_t)v28;
	f8(v29);

	i8 v30 = (i8)(intptr_t)(ws+3128);
	i8 v31 = *(i8*)(intptr_t)v30;
	i8 v32 = v31+(+1);
	i8 v33 = (i8)(intptr_t)(ws+3128);
	*(i8*)(intptr_t)v33 = v32;

	goto c02_0001;

c02_0002:;

endsub:;
}

// print_nl workspace at ws+768 length ws+0
void f12(void) {

	i1 v34 = (i1)+10;
	f8(v34);

endsub:;
}

// UIToA workspace at ws+3128 length ws+49
void f13(i8* p35 /* ptr */, i8 p36 /* buffer */, i1 p37 /* base */, i4 p38 /* value */) {
	*(i4*)(intptr_t)(ws+3128) = p38; /*value */
	*(i1*)(intptr_t)(ws+3132) = p37; /*base */
	*(i8*)(intptr_t)(ws+3136) = p36; /*buffer */

	i8 v39 = (i8)(intptr_t)(ws+3136);
	i8 v40 = *(i8*)(intptr_t)v39;
	i8 v41 = (i8)(intptr_t)(ws+3144);
	*(i8*)(intptr_t)v41 = v40;

c02_0008:;

	i8 v42 = (i8)(intptr_t)(ws+3128);
	i4 v43 = *(i4*)(intptr_t)v42;
	i8 v44 = (i8)(intptr_t)(ws+3132);
	i1 v45 = *(i1*)(intptr_t)v44;
	i4 v46 = v45;
	i4 v47 = v43%v46;
	i8 v48 = (i8)(intptr_t)(ws+3152);
	*(i4*)(intptr_t)v48 = v47;

	i8 v49 = (i8)(intptr_t)(ws+3128);
	i4 v50 = *(i4*)(intptr_t)v49;
	i8 v51 = (i8)(intptr_t)(ws+3132);
	i1 v52 = *(i1*)(intptr_t)v51;
	i4 v53 = v52;
	i4 v54 = v50/v53;
	i8 v55 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v55 = v54;

	i8 v56 = (i8)(intptr_t)(ws+3152);
	i4 v57 = *(i4*)(intptr_t)v56;
	i4 v58 = (i4)+10;
	if (v57<v58) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v59 = (i8)(intptr_t)(ws+3152);
	i4 v60 = *(i4*)(intptr_t)v59;
	i4 v61 = v60+(+48);
	i8 v62 = (i8)(intptr_t)(ws+3152);
	*(i4*)(intptr_t)v62 = v61;

	goto c02_000a;

c02_000e:;

	i8 v63 = (i8)(intptr_t)(ws+3152);
	i4 v64 = *(i4*)(intptr_t)v63;
	i4 v65 = v64+(+87);
	i8 v66 = (i8)(intptr_t)(ws+3152);
	*(i4*)(intptr_t)v66 = v65;

c02_000a:;

	i8 v67 = (i8)(intptr_t)(ws+3152);
	i4 v68 = *(i4*)(intptr_t)v67;
	i1 v69 = v68;
	i8 v70 = (i8)(intptr_t)(ws+3144);
	i8 v71 = *(i8*)(intptr_t)v70;
	*(i1*)(intptr_t)v71 = v69;

	i8 v72 = (i8)(intptr_t)(ws+3144);
	i8 v73 = *(i8*)(intptr_t)v72;
	i8 v74 = v73+(+1);
	i8 v75 = (i8)(intptr_t)(ws+3144);
	*(i8*)(intptr_t)v75 = v74;

	i8 v76 = (i8)(intptr_t)(ws+3128);
	i4 v77 = *(i4*)(intptr_t)v76;
	i4 v78 = (i4)+0;
	if (v77==v78) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

	goto c02_000f;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v79 = (i8)(intptr_t)(ws+3136);
	i8 v80 = *(i8*)(intptr_t)v79;
	i8 v81 = (i8)(intptr_t)(ws+3160);
	*(i8*)(intptr_t)v81 = v80;

	i8 v82 = (i8)(intptr_t)(ws+3144);
	i8 v83 = *(i8*)(intptr_t)v82;
	i8 v84 = v83+(-1);
	i8 v85 = (i8)(intptr_t)(ws+3168);
	*(i8*)(intptr_t)v85 = v84;

c02_0016:;

	i8 v86 = (i8)(intptr_t)(ws+3160);
	i8 v87 = *(i8*)(intptr_t)v86;
	i8 v88 = (i8)(intptr_t)(ws+3168);
	i8 v89 = *(i8*)(intptr_t)v88;
	if (v87<v89) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v90 = (i8)(intptr_t)(ws+3160);
	i8 v91 = *(i8*)(intptr_t)v90;
	i1 v92 = *(i1*)(intptr_t)v91;
	i8 v93 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v93 = v92;

	i8 v94 = (i8)(intptr_t)(ws+3168);
	i8 v95 = *(i8*)(intptr_t)v94;
	i1 v96 = *(i1*)(intptr_t)v95;
	i8 v97 = (i8)(intptr_t)(ws+3160);
	i8 v98 = *(i8*)(intptr_t)v97;
	*(i1*)(intptr_t)v98 = v96;

	i8 v99 = (i8)(intptr_t)(ws+3176);
	i1 v100 = *(i1*)(intptr_t)v99;
	i8 v101 = (i8)(intptr_t)(ws+3168);
	i8 v102 = *(i8*)(intptr_t)v101;
	*(i1*)(intptr_t)v102 = v100;

	i8 v103 = (i8)(intptr_t)(ws+3160);
	i8 v104 = *(i8*)(intptr_t)v103;
	i8 v105 = v104+(+1);
	i8 v106 = (i8)(intptr_t)(ws+3160);
	*(i8*)(intptr_t)v106 = v105;

	i8 v107 = (i8)(intptr_t)(ws+3168);
	i8 v108 = *(i8*)(intptr_t)v107;
	i8 v109 = v108+(-1);
	i8 v110 = (i8)(intptr_t)(ws+3168);
	*(i8*)(intptr_t)v110 = v109;

	goto c02_0016;

c02_0019:;

	i1 v111 = (i1)+0;
	i8 v112 = (i8)(intptr_t)(ws+3144);
	i8 v113 = *(i8*)(intptr_t)v112;
	*(i1*)(intptr_t)v113 = v111;

endsub:;
	*p35 = *(i8*)(intptr_t)(ws+3144);
}

// print_i32 workspace at ws+3104 length ws+24
void f15(i4 p140 /* value */) {
	*(i4*)(intptr_t)(ws+3104) = p140; /*value */

	i8 v141 = (i8)(intptr_t)(ws+3104);
	i4 v142 = *(i4*)(intptr_t)v141;
	i1 v143 = (i1)+10;
	i8 v144 = (i8)(intptr_t)(ws+3108);
	i8 v145;
	f13(&v145, v144, v143, v142);
	i8 v146 = (i8)(intptr_t)(ws+3120);
	*(i8*)(intptr_t)v146 = v145;

	i8 v147 = (i8)(intptr_t)(ws+3108);
	f11(v147);

endsub:;
}

// print_i16 workspace at ws+3096 length ws+2
void f16(i2 p148 /* value */) {
	*(i2*)(intptr_t)(ws+3096) = p148; /*value */

	i8 v149 = (i8)(intptr_t)(ws+3096);
	i2 v150 = *(i2*)(intptr_t)v149;
	i4 v151 = v150;
	f15(v151);

endsub:;
}

// print_i8 workspace at ws+3096 length ws+1
void f17(i1 p152 /* value */) {
	*(i1*)(intptr_t)(ws+3096) = p152; /*value */

	i8 v153 = (i8)(intptr_t)(ws+3096);
	i1 v154 = *(i1*)(intptr_t)v153;
	i4 v155 = v154;
	f15(v155);

endsub:;
}

// print_hex_i8 workspace at ws+776 length ws+3
void f18(i1 p156 /* value */) {
	*(i1*)(intptr_t)(ws+776) = p156; /*value */

	i1 v157 = (i1)+2;
	i8 v158 = (i8)(intptr_t)(ws+777);
	*(i1*)(intptr_t)v158 = v157;

c02_001f:;

	i8 v159 = (i8)(intptr_t)(ws+776);
	i1 v160 = *(i1*)(intptr_t)v159;
	i1 v161 = (i1)+4;
	i1 v162 = ((i1)v160)>>v161;
	i8 v163 = (i8)(intptr_t)(ws+778);
	*(i1*)(intptr_t)v163 = v162;

	i8 v164 = (i8)(intptr_t)(ws+778);
	i1 v165 = *(i1*)(intptr_t)v164;
	i1 v166 = (i1)+10;
	if (v165<v166) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v167 = (i8)(intptr_t)(ws+778);
	i1 v168 = *(i1*)(intptr_t)v167;
	i1 v169 = v168+(+48);
	i8 v170 = (i8)(intptr_t)(ws+778);
	*(i1*)(intptr_t)v170 = v169;

	goto c02_0021;

c02_0025:;

	i8 v171 = (i8)(intptr_t)(ws+778);
	i1 v172 = *(i1*)(intptr_t)v171;
	i1 v173 = v172+(+87);
	i8 v174 = (i8)(intptr_t)(ws+778);
	*(i1*)(intptr_t)v174 = v173;

c02_0021:;

	i8 v175 = (i8)(intptr_t)(ws+778);
	i1 v176 = *(i1*)(intptr_t)v175;
	f8(v176);

	i8 v177 = (i8)(intptr_t)(ws+776);
	i1 v178 = *(i1*)(intptr_t)v177;
	i1 v179 = (i1)+4;
	i1 v180 = ((i1)v178)<<v179;
	i8 v181 = (i8)(intptr_t)(ws+776);
	*(i1*)(intptr_t)v181 = v180;

	i8 v182 = (i8)(intptr_t)(ws+777);
	i1 v183 = *(i1*)(intptr_t)v182;
	i1 v184 = v183+(-1);
	i8 v185 = (i8)(intptr_t)(ws+777);
	*(i1*)(intptr_t)v185 = v184;

	i8 v186 = (i8)(intptr_t)(ws+777);
	i1 v187 = *(i1*)(intptr_t)v186;
	i1 v188 = (i1)+0;
	if (v187==v188) goto c02_0029; else goto c02_002a;

c02_0029:;

	goto c02_0020;

	goto c02_0026;

c02_002a:;

c02_0026:;

	goto c02_001f;

c02_0020:;

endsub:;
}

// print_hex_i32 workspace at ws+768 length ws+4
void f20(i4 p198 /* value */) {
	*(i4*)(intptr_t)(ws+768) = p198; /*value */

	i8 v199 = (i8)(intptr_t)(ws+768);
	i4 v200 = *(i4*)(intptr_t)v199;
	i1 v201 = (i1)+24;
	i4 v202 = ((i4)v200)>>v201;
	i1 v203 = v202;
	f18(v203);

	i8 v204 = (i8)(intptr_t)(ws+768);
	i4 v205 = *(i4*)(intptr_t)v204;
	i1 v206 = (i1)+16;
	i4 v207 = ((i4)v205)>>v206;
	i1 v208 = v207;
	f18(v208);

	i8 v209 = (i8)(intptr_t)(ws+768);
	i4 v210 = *(i4*)(intptr_t)v209;
	i1 v211 = (i1)+8;
	i4 v212 = ((i4)v210)>>v211;
	i1 v213 = v212;
	f18(v213);

	i8 v214 = (i8)(intptr_t)(ws+768);
	i4 v215 = *(i4*)(intptr_t)v214;
	i1 v216 = v215;
	f18(v216);

endsub:;
}

// ArgvInit workspace at ws+640 length ws+0
void f23(void) {

	
*(i8*)(intptr_t)(ws+16) 
 = (i8)(intptr_t)global_argv; 


	i8 v328 = (i8)(intptr_t)(ws+16);
	i8 v329 = *(i8*)(intptr_t)v328;
	i8 v330 = v329+(+8);
	i8 v331 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v331 = v330;

endsub:;
}

// ArgvNext workspace at ws+640 length ws+8
void f24(i8* p332 /* arg */) {

	i8 v333 = (i8)(intptr_t)(ws+16);
	i8 v334 = *(i8*)(intptr_t)v333;
	i8 v335 = (i8)+0;
	if (v334==v335) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v336 = (i8)+0;
	i8 v337 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v337 = v336;

	goto endsub;

	goto c02_004f;

c02_0053:;

c02_004f:;

	i8 v338 = (i8)(intptr_t)(ws+16);
	i8 v339 = *(i8*)(intptr_t)v338;
	i8 v340 = *(i8*)(intptr_t)v339;
	i8 v341 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v341 = v340;

	i8 v342 = (i8)(intptr_t)(ws+640);
	i8 v343 = *(i8*)(intptr_t)v342;
	i8 v344 = (i8)+0;
	if (v343==v344) goto c02_0057; else goto c02_0058;

c02_0057:;

	i8 v345 = (i8)+0;
	i8 v346 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v346 = v345;

	goto c02_0054;

c02_0058:;

	i8 v347 = (i8)(intptr_t)(ws+16);
	i8 v348 = *(i8*)(intptr_t)v347;
	i8 v349 = v348+(+8);
	i8 v350 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v350 = v349;

c02_0054:;

endsub:;
	*p332 = *(i8*)(intptr_t)(ws+640);
}

// StrCmp workspace at ws+744 length ws+17
void f25(i1* p351 /* res */, i8 p352 /* s2 */, i8 p353 /* s1 */) {
	*(i8*)(intptr_t)(ws+744) = p353; /*s1 */
	*(i8*)(intptr_t)(ws+752) = p352; /*s2 */

c02_0059:;

	i8 v354 = (i8)(intptr_t)(ws+744);
	i8 v355 = *(i8*)(intptr_t)v354;
	i1 v356 = *(i1*)(intptr_t)v355;
	i8 v357 = (i8)(intptr_t)(ws+752);
	i8 v358 = *(i8*)(intptr_t)v357;
	i1 v359 = *(i1*)(intptr_t)v358;
	i1 v360 = v356-v359;
	i8 v361 = (i8)(intptr_t)(ws+760);
	*(i1*)(intptr_t)v361 = v360;

	i8 v362 = (i8)(intptr_t)(ws+760);
	i1 v363 = *(i1*)(intptr_t)v362;
	i1 v364 = (i1)+0;
	if (v363==v364) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v365 = (i8)(intptr_t)(ws+744);
	i8 v366 = *(i8*)(intptr_t)v365;
	i1 v367 = *(i1*)(intptr_t)v366;
	i1 v368 = (i1)+0;
	if (v367==v368) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

	goto c02_005b;

c02_0061:;

c02_005b:;

	i8 v369 = (i8)(intptr_t)(ws+744);
	i8 v370 = *(i8*)(intptr_t)v369;
	i8 v371 = v370+(+1);
	i8 v372 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v372 = v371;

	i8 v373 = (i8)(intptr_t)(ws+752);
	i8 v374 = *(i8*)(intptr_t)v373;
	i8 v375 = v374+(+1);
	i8 v376 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v376 = v375;

	goto c02_0059;

c02_005a:;

endsub:;
	*p351 = *(i1*)(intptr_t)(ws+760);
}

// ToLower workspace at ws+664 length ws+2
void f26(i1* p377 /* cc */, i1 p378 /* c */) {
	*(i1*)(intptr_t)(ws+664) = p378; /*c */

	i8 v379 = (i8)(intptr_t)(ws+664);
	i1 v380 = *(i1*)(intptr_t)v379;
	i1 v381 = (i1)+65;
	if (v380<v381) goto c02_0069; else goto c02_006a;

c02_006a:;

	i1 v382 = (i1)+90;
	i8 v383 = (i8)(intptr_t)(ws+664);
	i1 v384 = *(i1*)(intptr_t)v383;
	if (v382<v384) goto c02_0069; else goto c02_0068;

c02_0068:;

	i8 v385 = (i8)(intptr_t)(ws+664);
	i1 v386 = *(i1*)(intptr_t)v385;
	i1 v387 = v386|(+32);
	i8 v388 = (i8)(intptr_t)(ws+665);
	*(i1*)(intptr_t)v388 = v387;

	goto c02_0063;

c02_0069:;

	i8 v389 = (i8)(intptr_t)(ws+664);
	i1 v390 = *(i1*)(intptr_t)v389;
	i8 v391 = (i8)(intptr_t)(ws+665);
	*(i1*)(intptr_t)v391 = v390;

c02_0063:;

endsub:;
	*p377 = *(i1*)(intptr_t)(ws+665);
}

// StrICmp workspace at ws+640 length ws+17
void f27(i1* p392 /* res */, i8 p393 /* s2 */, i8 p394 /* s1 */) {
	*(i8*)(intptr_t)(ws+640) = p394; /*s1 */
	*(i8*)(intptr_t)(ws+648) = p393; /*s2 */

c02_006b:;

	i8 v395 = (i8)(intptr_t)(ws+640);
	i8 v396 = *(i8*)(intptr_t)v395;
	i1 v397 = *(i1*)(intptr_t)v396;
	i1 v398;
	f26(&v398, v397);
	i8 v399 = (i8)(intptr_t)(ws+648);
	i8 v400 = *(i8*)(intptr_t)v399;
	i1 v401 = *(i1*)(intptr_t)v400;
	i1 v402;
	f26(&v402, v401);
	i1 v403 = v398-v402;
	i8 v404 = (i8)(intptr_t)(ws+656);
	*(i1*)(intptr_t)v404 = v403;

	i8 v405 = (i8)(intptr_t)(ws+656);
	i1 v406 = *(i1*)(intptr_t)v405;
	i1 v407 = (i1)+0;
	if (v406==v407) goto c02_0074; else goto c02_0072;

c02_0074:;

	i8 v408 = (i8)(intptr_t)(ws+640);
	i8 v409 = *(i8*)(intptr_t)v408;
	i1 v410 = *(i1*)(intptr_t)v409;
	i1 v411 = (i1)+0;
	if (v410==v411) goto c02_0072; else goto c02_0073;

c02_0072:;

	goto c02_006c;

	goto c02_006d;

c02_0073:;

c02_006d:;

	i8 v412 = (i8)(intptr_t)(ws+640);
	i8 v413 = *(i8*)(intptr_t)v412;
	i8 v414 = v413+(+1);
	i8 v415 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v415 = v414;

	i8 v416 = (i8)(intptr_t)(ws+648);
	i8 v417 = *(i8*)(intptr_t)v416;
	i8 v418 = v417+(+1);
	i8 v419 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v419 = v418;

	goto c02_006b;

c02_006c:;

endsub:;
	*p392 = *(i1*)(intptr_t)(ws+656);
}

// StrLen workspace at ws+768 length ws+25
void f28(i8* p420 /* size */, i8 p421 /* s */) {
	*(i8*)(intptr_t)(ws+768) = p421; /*s */

	i8 v422 = (i8)(intptr_t)(ws+768);
	i8 v423 = *(i8*)(intptr_t)v422;
	i8 v424 = (i8)(intptr_t)(ws+784);
	*(i8*)(intptr_t)v424 = v423;

c02_0075:;

	i8 v425 = (i8)(intptr_t)(ws+784);
	i8 v426 = *(i8*)(intptr_t)v425;
	i1 v427 = *(i1*)(intptr_t)v426;
	i8 v428 = (i8)(intptr_t)(ws+792);
	*(i1*)(intptr_t)v428 = v427;

	i8 v429 = (i8)(intptr_t)(ws+792);
	i1 v430 = *(i1*)(intptr_t)v429;
	i1 v431 = (i1)+0;
	if (v430==v431) goto c02_007a; else goto c02_007b;

c02_007a:;

	goto c02_0076;

	goto c02_0077;

c02_007b:;

c02_0077:;

	i8 v432 = (i8)(intptr_t)(ws+784);
	i8 v433 = *(i8*)(intptr_t)v432;
	i8 v434 = v433+(+1);
	i8 v435 = (i8)(intptr_t)(ws+784);
	*(i8*)(intptr_t)v435 = v434;

	goto c02_0075;

c02_0076:;

	i8 v436 = (i8)(intptr_t)(ws+784);
	i8 v437 = *(i8*)(intptr_t)v436;
	i8 v438 = (i8)(intptr_t)(ws+768);
	i8 v439 = *(i8*)(intptr_t)v438;
	i8 v440 = v437-v439;
	i8 v441 = (i8)(intptr_t)(ws+776);
	*(i8*)(intptr_t)v441 = v440;

endsub:;
	*p420 = *(i8*)(intptr_t)(ws+776);
}

// MemCopy workspace at ws+768 length ws+24
void f30(i8 p463 /* dest */, i8 p464 /* size */, i8 p465 /* src */) {
	*(i8*)(intptr_t)(ws+768) = p465; /*src */
	*(i8*)(intptr_t)(ws+776) = p464; /*size */
	*(i8*)(intptr_t)(ws+784) = p463; /*dest */

c02_0085:;

	i8 v466 = (i8)(intptr_t)(ws+776);
	i8 v467 = *(i8*)(intptr_t)v466;
	i8 v468 = (i8)+0;
	if (v467==v468) goto c02_0088; else goto c02_0087;

c02_0087:;

	i8 v469 = (i8)(intptr_t)(ws+768);
	i8 v470 = *(i8*)(intptr_t)v469;
	i1 v471 = *(i1*)(intptr_t)v470;
	i8 v472 = (i8)(intptr_t)(ws+784);
	i8 v473 = *(i8*)(intptr_t)v472;
	*(i1*)(intptr_t)v473 = v471;

	i8 v474 = (i8)(intptr_t)(ws+784);
	i8 v475 = *(i8*)(intptr_t)v474;
	i8 v476 = v475+(+1);
	i8 v477 = (i8)(intptr_t)(ws+784);
	*(i8*)(intptr_t)v477 = v476;

	i8 v478 = (i8)(intptr_t)(ws+768);
	i8 v479 = *(i8*)(intptr_t)v478;
	i8 v480 = v479+(+1);
	i8 v481 = (i8)(intptr_t)(ws+768);
	*(i8*)(intptr_t)v481 = v480;

	i8 v482 = (i8)(intptr_t)(ws+776);
	i8 v483 = *(i8*)(intptr_t)v482;
	i8 v484 = v483+(-1);
	i8 v485 = (i8)(intptr_t)(ws+776);
	*(i8*)(intptr_t)v485 = v484;

	goto c02_0085;

c02_0088:;

endsub:;
}
const i1 c02_s0008[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x0a,0 };

// Alloc workspace at ws+792 length ws+56
void f33(i8* p581 /* block */, i8 p582 /* length */) {
	*(i8*)(intptr_t)(ws+792) = p582; /*length */

	i8 v583 = (i8)(intptr_t)(ws+792);
	i8 v584 = *(i8*)(intptr_t)v583;
	i8 v585 = v584+(+8);
	i8 v586;
	f4(&v586, v585);
	i8 v587 = (i8)(intptr_t)(ws+808);
	*(i8*)(intptr_t)v587 = v586;

	i8 v588 = (i8)+0;
	i8 v589 = (i8)(intptr_t)(ws+816);
	*(i8*)(intptr_t)v589 = v588;

	i8 v590 = (i8)(intptr_t)(ws+24);
	i8 v591 = *(i8*)(intptr_t)v590;
	i8 v592 = (i8)(intptr_t)(ws+824);
	*(i8*)(intptr_t)v592 = v591;

c02_009f:;

	i8 v593 = (i8)(intptr_t)(ws+824);
	i8 v594 = *(i8*)(intptr_t)v593;
	i8 v595 = (i8)+0;
	if (v594==v595) goto c02_00a4; else goto c02_00a5;

c02_00a4:;

	i8 v596 = (i8)+0;
	i8 v597 = (i8)(intptr_t)(ws+824);
	*(i8*)(intptr_t)v597 = v596;

	i8 v598 = (i8)(intptr_t)c02_s0008;
	f11(v598);

	f6();

	goto c02_00a0;

	goto c02_00a1;

c02_00a5:;

c02_00a1:;

	i8 v599 = (i8)(intptr_t)(ws+824);
	i8 v600 = *(i8*)(intptr_t)v599;
	i8 v601 = v600+(+8);
	i8 v602 = *(i8*)(intptr_t)v601;
	i8 v603 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v603 = v602;

	i8 v604 = (i8)(intptr_t)(ws+832);
	i8 v605 = *(i8*)(intptr_t)v604;
	i8 v606 = (i8)(intptr_t)(ws+808);
	i8 v607 = *(i8*)(intptr_t)v606;
	if (v605==v607) goto c02_00a9; else goto c02_00aa;

c02_00a9:;

	i8 v608 = (i8)(intptr_t)(ws+816);
	i8 v609 = *(i8*)(intptr_t)v608;
	i8 v610 = (i8)+0;
	if (v609==v610) goto c02_00af; else goto c02_00ae;

c02_00ae:;

	i8 v611 = (i8)(intptr_t)(ws+824);
	i8 v612 = *(i8*)(intptr_t)v611;
	i8 v613 = *(i8*)(intptr_t)v612;
	i8 v614 = (i8)(intptr_t)(ws+816);
	i8 v615 = *(i8*)(intptr_t)v614;
	*(i8*)(intptr_t)v615 = v613;

	goto c02_00ab;

c02_00af:;

	i8 v616 = (i8)(intptr_t)(ws+824);
	i8 v617 = *(i8*)(intptr_t)v616;
	i8 v618 = *(i8*)(intptr_t)v617;
	i8 v619 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v619 = v618;

c02_00ab:;

	goto c02_00a0;

	goto c02_00a6;

c02_00aa:;

	i8 v620 = (i8)(intptr_t)(ws+808);
	i8 v621 = *(i8*)(intptr_t)v620;
	i8 v622 = (i8)(intptr_t)(ws+832);
	i8 v623 = *(i8*)(intptr_t)v622;
	i8 v624 = v623+(-16);
	if (v621<v624) goto c02_00b2; else goto c02_00b3;

c02_00b2:;

	i8 v625 = (i8)(intptr_t)(ws+832);
	i8 v626 = *(i8*)(intptr_t)v625;
	i8 v627 = (i8)(intptr_t)(ws+808);
	i8 v628 = *(i8*)(intptr_t)v627;
	i8 v629 = v626-v628;
	i8 v630 = (i8)(intptr_t)(ws+824);
	i8 v631 = *(i8*)(intptr_t)v630;
	i8 v632 = v631+(+8);
	*(i8*)(intptr_t)v632 = v629;

	i8 v633 = (i8)(intptr_t)(ws+824);
	i8 v634 = *(i8*)(intptr_t)v633;
	i8 v635 = (i8)(intptr_t)(ws+824);
	i8 v636 = *(i8*)(intptr_t)v635;
	i8 v637 = v636+(+8);
	i8 v638 = *(i8*)(intptr_t)v637;
	i8 v639 = v634+v638;
	i8 v640 = (i8)(intptr_t)(ws+824);
	*(i8*)(intptr_t)v640 = v639;

	goto c02_00a0;

	goto c02_00a6;

c02_00b3:;

c02_00a6:;

	i8 v641 = (i8)(intptr_t)(ws+824);
	i8 v642 = *(i8*)(intptr_t)v641;
	i8 v643 = (i8)(intptr_t)(ws+816);
	*(i8*)(intptr_t)v643 = v642;

	i8 v644 = (i8)(intptr_t)(ws+824);
	i8 v645 = *(i8*)(intptr_t)v644;
	i8 v646 = *(i8*)(intptr_t)v645;
	i8 v647 = (i8)(intptr_t)(ws+824);
	*(i8*)(intptr_t)v647 = v646;

	goto c02_009f;

c02_00a0:;

	i8 v648 = (i8)(intptr_t)(ws+824);
	i8 v649 = *(i8*)(intptr_t)v648;
	i8 v650 = (i8)(intptr_t)(ws+840);
	*(i8*)(intptr_t)v650 = v649;

	i8 v651 = (i8)(intptr_t)(ws+808);
	i8 v652 = *(i8*)(intptr_t)v651;
	i8 v653 = (i8)(intptr_t)(ws+840);
	i8 v654 = *(i8*)(intptr_t)v653;
	*(i8*)(intptr_t)v654 = v652;

	i8 v655 = (i8)(intptr_t)(ws+840);
	i8 v656 = *(i8*)(intptr_t)v655;
	i8 v657 = v656+(+8);
	i8 v658 = (i8)(intptr_t)(ws+800);
	*(i8*)(intptr_t)v658 = v657;

	i8 v659 = (i8)(intptr_t)(ws+800);
	i8 v660 = *(i8*)(intptr_t)v659;
	i1 v661 = (i1)+0;
	i8 v662 = (i8)(intptr_t)(ws+792);
	i8 v663 = *(i8*)(intptr_t)v662;
	f7(v663, v661, v660);

endsub:;
	*p581 = *(i8*)(intptr_t)(ws+800);
}

// GetFreeMemory workspace at ws+640 length ws+16
void f36(i8* p802 /* bytes */) {

	i8 v803 = (i8)+0;
	i8 v804 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v804 = v803;

	i8 v805 = (i8)(intptr_t)(ws+24);
	i8 v806 = *(i8*)(intptr_t)v805;
	i8 v807 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v807 = v806;

c02_00d6:;

	i8 v808 = (i8)(intptr_t)(ws+648);
	i8 v809 = *(i8*)(intptr_t)v808;
	i8 v810 = (i8)+0;
	if (v809==v810) goto c02_00d9; else goto c02_00d8;

c02_00d8:;

	i8 v811 = (i8)(intptr_t)(ws+640);
	i8 v812 = *(i8*)(intptr_t)v811;
	i8 v813 = (i8)(intptr_t)(ws+648);
	i8 v814 = *(i8*)(intptr_t)v813;
	i8 v815 = v814+(+8);
	i8 v816 = *(i8*)(intptr_t)v815;
	i8 v817 = v812+v816;
	i8 v818 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v818 = v817;

	i8 v819 = (i8)(intptr_t)(ws+648);
	i8 v820 = *(i8*)(intptr_t)v819;
	i8 v821 = *(i8*)(intptr_t)v820;
	i8 v822 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v822 = v821;

	goto c02_00d6;

c02_00d9:;

endsub:;
	*p802 = *(i8*)(intptr_t)(ws+640);
}

// StrDup workspace at ws+744 length ws+24
void f37(i8* p823 /* news */, i8 p824 /* s */) {
	*(i8*)(intptr_t)(ws+744) = p824; /*s */

	i8 v825 = (i8)(intptr_t)(ws+744);
	i8 v826 = *(i8*)(intptr_t)v825;
	i8 v827;
	f28(&v827, v826);
	i8 v828 = v827+(+1);
	i8 v829 = (i8)(intptr_t)(ws+760);
	*(i8*)(intptr_t)v829 = v828;

	i8 v830 = (i8)(intptr_t)(ws+760);
	i8 v831 = *(i8*)(intptr_t)v830;
	i8 v832;
	f33(&v832, v831);
	i8 v833 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v833 = v832;

	i8 v834 = (i8)(intptr_t)(ws+744);
	i8 v835 = *(i8*)(intptr_t)v834;
	i8 v836 = (i8)(intptr_t)(ws+760);
	i8 v837 = *(i8*)(intptr_t)v836;
	i8 v838 = (i8)(intptr_t)(ws+752);
	i8 v839 = *(i8*)(intptr_t)v838;
	f30(v839, v837, v835);

endsub:;
	*p823 = *(i8*)(intptr_t)(ws+752);
}

// fcb_i_blockin workspace at ws+824 length ws+28
void f38(i8 p840 /* fcb */) {
	*(i8*)(intptr_t)(ws+824) = p840; /*fcb */

	i8 v841 = (i8)(intptr_t)(ws+824);
	i8 v842 = *(i8*)(intptr_t)v841;
	i8 v843 = v842+(+12);
	i1 v844 = (i1)+0;
	i8 v845 = (i8)+512;
	f7(v845, v844, v843);

	i8 v846 = (i8)(intptr_t)(ws+824);
	i8 v847 = *(i8*)(intptr_t)v846;
	i4 v848 = *(i4*)(intptr_t)v847;
	i8 v849 = (i8)(intptr_t)(ws+832);
	*(i4*)(intptr_t)v849 = v848;

	i8 v850 = (i8)(intptr_t)(ws+824);
	i8 v851 = *(i8*)(intptr_t)v850;
	i8 v852 = v851+(+12);
	i8 v853 = (i8)(intptr_t)(ws+840);
	*(i8*)(intptr_t)v853 = v852;

	i8 v854 = (i8)(intptr_t)(ws+824);
	i8 v855 = *(i8*)(intptr_t)v854;
	i8 v856 = v855+(+8);
	i4 v857 = *(i4*)(intptr_t)v856;
	i1 v858 = (i1)+9;
	i4 v859 = ((i4)v857)<<v858;
	i8 v860 = (i8)(intptr_t)(ws+848);
	*(i4*)(intptr_t)v860 = v859;

	
pread( 
*(i4*)(intptr_t)(ws+832) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+840) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+848) 
); 


	i1 v861 = (i1)+0;
	i8 v862 = (i8)(intptr_t)(ws+824);
	i8 v863 = *(i8*)(intptr_t)v862;
	i8 v864 = v863+(+6);
	*(i1*)(intptr_t)v864 = v861;

endsub:;
}

// fcb_i_blockout workspace at ws+824 length ws+28
void f39(i8 p865 /* fcb */) {
	*(i8*)(intptr_t)(ws+824) = p865; /*fcb */

	i8 v866 = (i8)(intptr_t)(ws+824);
	i8 v867 = *(i8*)(intptr_t)v866;
	i8 v868 = v867+(+6);
	i1 v869 = *(i1*)(intptr_t)v868;
	i1 v870 = (i1)+0;
	if (v869==v870) goto c02_00de; else goto c02_00dd;

c02_00dd:;

	i8 v871 = (i8)(intptr_t)(ws+824);
	i8 v872 = *(i8*)(intptr_t)v871;
	i4 v873 = *(i4*)(intptr_t)v872;
	i8 v874 = (i8)(intptr_t)(ws+832);
	*(i4*)(intptr_t)v874 = v873;

	i8 v875 = (i8)(intptr_t)(ws+824);
	i8 v876 = *(i8*)(intptr_t)v875;
	i8 v877 = v876+(+12);
	i8 v878 = (i8)(intptr_t)(ws+840);
	*(i8*)(intptr_t)v878 = v877;

	i8 v879 = (i8)(intptr_t)(ws+824);
	i8 v880 = *(i8*)(intptr_t)v879;
	i8 v881 = v880+(+8);
	i4 v882 = *(i4*)(intptr_t)v881;
	i1 v883 = (i1)+9;
	i4 v884 = ((i4)v882)<<v883;
	i8 v885 = (i8)(intptr_t)(ws+848);
	*(i4*)(intptr_t)v885 = v884;

	
pwrite( 
*(i4*)(intptr_t)(ws+832) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+840) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+848) 
); 


	i1 v886 = (i1)+0;
	i8 v887 = (i8)(intptr_t)(ws+824);
	i8 v888 = *(i8*)(intptr_t)v887;
	i8 v889 = v888+(+6);
	*(i1*)(intptr_t)v889 = v886;

	goto c02_00da;

c02_00de:;

c02_00da:;

endsub:;
}

// fcb_i_changeblock workspace at ws+808 length ws+12
void f40(i4 p890 /* newblock */, i8 p891 /* fcb */) {
	*(i8*)(intptr_t)(ws+808) = p891; /*fcb */
	*(i4*)(intptr_t)(ws+816) = p890; /*newblock */

	i8 v892 = (i8)(intptr_t)(ws+816);
	i4 v893 = *(i4*)(intptr_t)v892;
	i8 v894 = (i8)(intptr_t)(ws+808);
	i8 v895 = *(i8*)(intptr_t)v894;
	i8 v896 = v895+(+8);
	i4 v897 = *(i4*)(intptr_t)v896;
	if (v893==v897) goto c02_00e3; else goto c02_00e2;

c02_00e2:;

	i8 v898 = (i8)(intptr_t)(ws+808);
	i8 v899 = *(i8*)(intptr_t)v898;
	f39(v899);

	i8 v900 = (i8)(intptr_t)(ws+816);
	i4 v901 = *(i4*)(intptr_t)v900;
	i8 v902 = (i8)(intptr_t)(ws+808);
	i8 v903 = *(i8*)(intptr_t)v902;
	i8 v904 = v903+(+8);
	*(i4*)(intptr_t)v904 = v901;

	i8 v905 = (i8)(intptr_t)(ws+808);
	i8 v906 = *(i8*)(intptr_t)v905;
	f38(v906);

	goto c02_00df;

c02_00e3:;

c02_00df:;

endsub:;
}

// fcb_i_open workspace at ws+752 length ws+28
void f41(i1* p907 /* errno */, i4 p908 /* flags */, i8 p909 /* filename */, i8 p910 /* fcb */) {
	*(i8*)(intptr_t)(ws+752) = p910; /*fcb */
	*(i8*)(intptr_t)(ws+760) = p909; /*filename */
	*(i4*)(intptr_t)(ws+768) = p908; /*flags */

	i8 v911 = (i8)(intptr_t)(ws+752);
	i8 v912 = *(i8*)(intptr_t)v911;
	i1 v913 = (i1)+0;
	i8 v914 = (i8)+524;
	f7(v914, v913, v912);

	i2 v915 = (i2)+511;
	i8 v916 = (i8)(intptr_t)(ws+752);
	i8 v917 = *(i8*)(intptr_t)v916;
	i8 v918 = v917+(+4);
	*(i2*)(intptr_t)v918 = v915;

	i4 v919 = (i4)-1;
	i8 v920 = (i8)(intptr_t)(ws+752);
	i8 v921 = *(i8*)(intptr_t)v920;
	i8 v922 = v921+(+8);
	*(i4*)(intptr_t)v922 = v919;

	
errno = 0; 


	
*(i4*)(intptr_t)(ws+776) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+760) 
,  
*(i4*)(intptr_t)(ws+768) 
,  
(+438)
); 


	i8 v923 = (i8)(intptr_t)(ws+776);
	i4 v924 = *(i4*)(intptr_t)v923;
	i8 v925 = (i8)(intptr_t)(ws+752);
	i8 v926 = *(i8*)(intptr_t)v925;
	*(i4*)(intptr_t)v926 = v924;

	i8 v927 = (i8)(intptr_t)(ws+776);
	i4 v928 = *(i4*)(intptr_t)v927;
	i4 v929 = (i4)+0;
	if ((s4)v928<(s4)v929) goto c02_00e7; else goto c02_00e8;

c02_00e7:;

	
*(i1*)(intptr_t)(ws+772) 
 = errno; 


	goto c02_00e4;

c02_00e8:;

	i1 v930 = (i1)+0;
	i8 v931 = (i8)(intptr_t)(ws+772);
	*(i1*)(intptr_t)v931 = v930;

c02_00e4:;

endsub:;
	*p907 = *(i1*)(intptr_t)(ws+772);
}

// FCBOpenIn workspace at ws+728 length ws+17
void f42(i1* p932 /* errno */, i8 p933 /* filename */, i8 p934 /* fcb */) {
	*(i8*)(intptr_t)(ws+728) = p934; /*fcb */
	*(i8*)(intptr_t)(ws+736) = p933; /*filename */

	i8 v935 = (i8)(intptr_t)(ws+728);
	i8 v936 = *(i8*)(intptr_t)v935;
	i8 v937 = (i8)(intptr_t)(ws+736);
	i8 v938 = *(i8*)(intptr_t)v937;
	i4 v939 = (i4)+0;
	i1 v940;
	f41(&v940, v939, v938, v936);
	i8 v941 = (i8)(intptr_t)(ws+744);
	*(i1*)(intptr_t)v941 = v940;

endsub:;
	*p932 = *(i1*)(intptr_t)(ws+744);
}

// FCBOpenOut workspace at ws+648 length ws+17
void f44(i1* p952 /* errno */, i8 p953 /* filename */, i8 p954 /* fcb */) {
	*(i8*)(intptr_t)(ws+648) = p954; /*fcb */
	*(i8*)(intptr_t)(ws+656) = p953; /*filename */

	i8 v955 = (i8)(intptr_t)(ws+648);
	i8 v956 = *(i8*)(intptr_t)v955;
	i8 v957 = (i8)(intptr_t)(ws+656);
	i8 v958 = *(i8*)(intptr_t)v957;
	i4 v959 = (i4)+578;
	i1 v960;
	f41(&v960, v959, v958, v956);
	i8 v961 = (i8)(intptr_t)(ws+664);
	*(i1*)(intptr_t)v961 = v960;

endsub:;
	*p952 = *(i1*)(intptr_t)(ws+664);
}

// FCBClose workspace at ws+640 length ws+16
void f45(i1* p962 /* errno */, i8 p963 /* fcb */) {
	*(i8*)(intptr_t)(ws+640) = p963; /*fcb */

	i8 v964 = (i8)(intptr_t)(ws+640);
	i8 v965 = *(i8*)(intptr_t)v964;
	f39(v965);

	i8 v966 = (i8)(intptr_t)(ws+640);
	i8 v967 = *(i8*)(intptr_t)v966;
	i4 v968 = *(i4*)(intptr_t)v967;
	i8 v969 = (i8)(intptr_t)(ws+652);
	*(i4*)(intptr_t)v969 = v968;

	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+652) 
); 


	
*(i1*)(intptr_t)(ws+648) 
 = errno; 


endsub:;
	*p962 = *(i1*)(intptr_t)(ws+648);
}

// FCBSeek workspace at ws+728 length ws+18
void f46(i4 p970 /* pos */, i8 p971 /* fcb */) {
	*(i8*)(intptr_t)(ws+728) = p971; /*fcb */
	*(i4*)(intptr_t)(ws+736) = p970; /*pos */

	i8 v972 = (i8)(intptr_t)(ws+736);
	i4 v973 = *(i4*)(intptr_t)v972;
	i4 v974 = v973+(-1);
	i8 v975 = (i8)(intptr_t)(ws+736);
	*(i4*)(intptr_t)v975 = v974;

	i8 v976 = (i8)(intptr_t)(ws+736);
	i4 v977 = *(i4*)(intptr_t)v976;
	i1 v978 = (i1)+9;
	i4 v979 = ((i4)v977)>>v978;
	i8 v980 = (i8)(intptr_t)(ws+740);
	*(i4*)(intptr_t)v980 = v979;

	i8 v981 = (i8)(intptr_t)(ws+736);
	i4 v982 = *(i4*)(intptr_t)v981;
	i2 v983 = v982;
	i2 v984 = v983&(+511);
	i8 v985 = (i8)(intptr_t)(ws+744);
	*(i2*)(intptr_t)v985 = v984;

	i8 v986 = (i8)(intptr_t)(ws+728);
	i8 v987 = *(i8*)(intptr_t)v986;
	i8 v988 = (i8)(intptr_t)(ws+740);
	i4 v989 = *(i4*)(intptr_t)v988;
	f40(v989, v987);

	i8 v990 = (i8)(intptr_t)(ws+744);
	i2 v991 = *(i2*)(intptr_t)v990;
	i8 v992 = (i8)(intptr_t)(ws+728);
	i8 v993 = *(i8*)(intptr_t)v992;
	i8 v994 = v993+(+4);
	*(i2*)(intptr_t)v994 = v991;

endsub:;
}

// FCBPos workspace at ws+768 length ws+12
void f47(i4* p995 /* pos */, i8 p996 /* fcb */) {
	*(i8*)(intptr_t)(ws+768) = p996; /*fcb */

	i8 v997 = (i8)(intptr_t)(ws+768);
	i8 v998 = *(i8*)(intptr_t)v997;
	i8 v999 = v998+(+8);
	i4 v1000 = *(i4*)(intptr_t)v999;
	i1 v1001 = (i1)+9;
	i4 v1002 = ((i4)v1000)<<v1001;
	i8 v1003 = (i8)(intptr_t)(ws+768);
	i8 v1004 = *(i8*)(intptr_t)v1003;
	i8 v1005 = v1004+(+4);
	i2 v1006 = *(i2*)(intptr_t)v1005;
	i4 v1007 = v1006;
	i4 v1008 = v1002|v1007;
	i4 v1009 = v1008+(+1);
	i8 v1010 = (i8)(intptr_t)(ws+776);
	*(i4*)(intptr_t)v1010 = v1009;

endsub:;
	*p995 = *(i4*)(intptr_t)(ws+776);
}

// FCBExt workspace at ws+664 length ws+16
void f48(i4* p1011 /* len */, i8 p1012 /* fcb */) {
	*(i8*)(intptr_t)(ws+664) = p1012; /*fcb */

	i8 v1013 = (i8)(intptr_t)(ws+664);
	i8 v1014 = *(i8*)(intptr_t)v1013;
	f39(v1014);

	i8 v1015 = (i8)(intptr_t)(ws+664);
	i8 v1016 = *(i8*)(intptr_t)v1015;
	i4 v1017 = *(i4*)(intptr_t)v1016;
	i8 v1018 = (i8)(intptr_t)(ws+676);
	*(i4*)(intptr_t)v1018 = v1017;

	
*(i4*)(intptr_t)(ws+672) 
 = lseek( 
*(i4*)(intptr_t)(ws+676) 
, 0, SEEK_END); 


	i8 v1019 = (i8)(intptr_t)(ws+672);
	i4 v1020 = *(i4*)(intptr_t)v1019;
	i4 v1021 = v1020+(+511);
	i4 v1022 = v1021&(-512);
	i8 v1023 = (i8)(intptr_t)(ws+672);
	*(i4*)(intptr_t)v1023 = v1022;

endsub:;
	*p1011 = *(i4*)(intptr_t)(ws+672);
}

// fcb_i_nextchar workspace at ws+800 length ws+8
void f49(i8 p1024 /* fcb */) {
	*(i8*)(intptr_t)(ws+800) = p1024; /*fcb */

	i8 v1025 = (i8)(intptr_t)(ws+800);
	i8 v1026 = *(i8*)(intptr_t)v1025;
	i8 v1027 = v1026+(+4);
	i2 v1028 = *(i2*)(intptr_t)v1027;
	i2 v1029 = v1028+(+1);
	i8 v1030 = (i8)(intptr_t)(ws+800);
	i8 v1031 = *(i8*)(intptr_t)v1030;
	i8 v1032 = v1031+(+4);
	*(i2*)(intptr_t)v1032 = v1029;

	i8 v1033 = (i8)(intptr_t)(ws+800);
	i8 v1034 = *(i8*)(intptr_t)v1033;
	i8 v1035 = v1034+(+4);
	i2 v1036 = *(i2*)(intptr_t)v1035;
	i2 v1037 = (i2)+512;
	if (v1036==v1037) goto c02_00ec; else goto c02_00ed;

c02_00ec:;

	i8 v1038 = (i8)(intptr_t)(ws+800);
	i8 v1039 = *(i8*)(intptr_t)v1038;
	i8 v1040 = (i8)(intptr_t)(ws+800);
	i8 v1041 = *(i8*)(intptr_t)v1040;
	i8 v1042 = v1041+(+8);
	i4 v1043 = *(i4*)(intptr_t)v1042;
	i4 v1044 = v1043+(+1);
	f40(v1044, v1039);

	i2 v1045 = (i2)+0;
	i8 v1046 = (i8)(intptr_t)(ws+800);
	i8 v1047 = *(i8*)(intptr_t)v1046;
	i8 v1048 = v1047+(+4);
	*(i2*)(intptr_t)v1048 = v1045;

	goto c02_00e9;

c02_00ed:;

c02_00e9:;

endsub:;
}

// FCBGetChar workspace at ws+784 length ws+9
void f50(i1* p1049 /* c */, i8 p1050 /* fcb */) {
	*(i8*)(intptr_t)(ws+784) = p1050; /*fcb */

	i8 v1051 = (i8)(intptr_t)(ws+784);
	i8 v1052 = *(i8*)(intptr_t)v1051;
	f49(v1052);

	i8 v1053 = (i8)(intptr_t)(ws+784);
	i8 v1054 = *(i8*)(intptr_t)v1053;
	i8 v1055 = v1054+(+12);
	i8 v1056 = (i8)(intptr_t)(ws+784);
	i8 v1057 = *(i8*)(intptr_t)v1056;
	i8 v1058 = v1057+(+4);
	i2 v1059 = *(i2*)(intptr_t)v1058;
	i8 v1060 = v1059;
	i8 v1061 = v1055+v1060;
	i1 v1062 = *(i1*)(intptr_t)v1061;
	i8 v1063 = (i8)(intptr_t)(ws+792);
	*(i1*)(intptr_t)v1063 = v1062;

endsub:;
	*p1049 = *(i1*)(intptr_t)(ws+792);
}

// FCBPutChar workspace at ws+768 length ws+9
void f51(i1 p1064 /* c */, i8 p1065 /* fcb */) {
	*(i8*)(intptr_t)(ws+768) = p1065; /*fcb */
	*(i1*)(intptr_t)(ws+776) = p1064; /*c */

	i8 v1066 = (i8)(intptr_t)(ws+768);
	i8 v1067 = *(i8*)(intptr_t)v1066;
	f49(v1067);

	i8 v1068 = (i8)(intptr_t)(ws+776);
	i1 v1069 = *(i1*)(intptr_t)v1068;
	i8 v1070 = (i8)(intptr_t)(ws+768);
	i8 v1071 = *(i8*)(intptr_t)v1070;
	i8 v1072 = v1071+(+12);
	i8 v1073 = (i8)(intptr_t)(ws+768);
	i8 v1074 = *(i8*)(intptr_t)v1073;
	i8 v1075 = v1074+(+4);
	i2 v1076 = *(i2*)(intptr_t)v1075;
	i8 v1077 = v1076;
	i8 v1078 = v1072+v1077;
	*(i1*)(intptr_t)v1078 = v1069;

	i1 v1079 = (i1)+1;
	i8 v1080 = (i8)(intptr_t)(ws+768);
	i8 v1081 = *(i8*)(intptr_t)v1080;
	i8 v1082 = v1081+(+6);
	*(i1*)(intptr_t)v1082 = v1079;

endsub:;
}
const i1 c02_s0009[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };

// StartError workspace at ws+768 length ws+0
void f55(void) {

	i8 v1144 = (i8)(intptr_t)c02_s0009;
	f11(v1144);

endsub:;
}

// EndError workspace at ws+768 length ws+0
void f56(void) {

	f12();

	f6();

endsub:;
}

// SimpleError workspace at ws+728 length ws+8
void f57(i8 p1145 /* s */) {
	*(i8*)(intptr_t)(ws+728) = p1145; /*s */

	f55();

	i8 v1146 = (i8)(intptr_t)(ws+728);
	i8 v1147 = *(i8*)(intptr_t)v1146;
	f11(v1147);

	f56();

endsub:;
}
const i1 c02_s000a[] = { 0x75,0x6e,0x61,0x62,0x6c,0x65,0x20,0x74,0x6f,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
const i1 c02_s000b[] = { 0x27,0 };

// CannotOpen workspace at ws+728 length ws+8
void f58(i8 p1148 /* filename */) {
	*(i8*)(intptr_t)(ws+728) = p1148; /*filename */

	f55();

	i8 v1149 = (i8)(intptr_t)c02_s000a;
	f11(v1149);

	i8 v1150 = (i8)(intptr_t)(ws+728);
	i8 v1151 = *(i8*)(intptr_t)v1150;
	f11(v1151);

	i8 v1152 = (i8)(intptr_t)c02_s000b;
	f11(v1152);

	f56();

endsub:;
}

// EmitByte workspace at ws+760 length ws+1
void f59(i1 p1153 /* c */) {
	*(i1*)(intptr_t)(ws+760) = p1153; /*c */

	i8 v1154 = (i8)(intptr_t)(ws+52);
	i8 v1155 = (i8)(intptr_t)(ws+760);
	i1 v1156 = *(i1*)(intptr_t)v1155;
	f51(v1156, v1154);

endsub:;
}

// E workspace at ws+744 length ws+9
void f60(i8 p1157 /* text */) {
	*(i8*)(intptr_t)(ws+744) = p1157; /*text */

c02_0101:;

	i8 v1158 = (i8)(intptr_t)(ws+744);
	i8 v1159 = *(i8*)(intptr_t)v1158;
	i1 v1160 = *(i1*)(intptr_t)v1159;
	i8 v1161 = (i8)(intptr_t)(ws+752);
	*(i1*)(intptr_t)v1161 = v1160;

	i8 v1162 = (i8)(intptr_t)(ws+744);
	i8 v1163 = *(i8*)(intptr_t)v1162;
	i8 v1164 = v1163+(+1);
	i8 v1165 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1165 = v1164;

	i8 v1166 = (i8)(intptr_t)(ws+752);
	i1 v1167 = *(i1*)(intptr_t)v1166;
	i1 v1168 = (i1)+0;
	if (v1167==v1168) goto c02_0106; else goto c02_0107;

c02_0106:;

	goto c02_0102;

	goto c02_0103;

c02_0107:;

c02_0103:;

	i8 v1169 = (i8)(intptr_t)(ws+752);
	i1 v1170 = *(i1*)(intptr_t)v1169;
	f59(v1170);

	goto c02_0101;

c02_0102:;

endsub:;
}

// E_u32 workspace at ws+720 length ws+33
void f61(i4 p1171 /* value */) {
	*(i4*)(intptr_t)(ws+720) = p1171; /*value */

	i8 v1172 = (i8)(intptr_t)(ws+724);
	i8 v1173 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v1173 = v1172;

	i8 v1174 = (i8)(intptr_t)(ws+720);
	i4 v1175 = *(i4*)(intptr_t)v1174;
	i1 v1176 = (i1)+10;
	i8 v1177 = (i8)(intptr_t)(ws+736);
	i8 v1178 = *(i8*)(intptr_t)v1177;
	i8 v1179;
	f13(&v1179, v1178, v1176, v1175);
	i8 v1180 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1180 = v1179;

c02_0108:;

	i8 v1181 = (i8)(intptr_t)(ws+736);
	i8 v1182 = *(i8*)(intptr_t)v1181;
	i1 v1183 = *(i1*)(intptr_t)v1182;
	i8 v1184 = (i8)(intptr_t)(ws+752);
	*(i1*)(intptr_t)v1184 = v1183;

	i8 v1185 = (i8)(intptr_t)(ws+752);
	i1 v1186 = *(i1*)(intptr_t)v1185;
	i1 v1187 = (i1)+0;
	if (v1186==v1187) goto c02_010d; else goto c02_010e;

c02_010d:;

	goto c02_0109;

	goto c02_010a;

c02_010e:;

c02_010a:;

	i8 v1188 = (i8)(intptr_t)(ws+752);
	i1 v1189 = *(i1*)(intptr_t)v1188;
	f59(v1189);

	i8 v1190 = (i8)(intptr_t)(ws+736);
	i8 v1191 = *(i8*)(intptr_t)v1190;
	i8 v1192 = v1191+(+1);
	i8 v1193 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v1193 = v1192;

	goto c02_0108;

c02_0109:;

endsub:;
}

// E_u16 workspace at ws+712 length ws+2
void f62(i2 p1194 /* value */) {
	*(i2*)(intptr_t)(ws+712) = p1194; /*value */

	i8 v1195 = (i8)(intptr_t)(ws+712);
	i2 v1196 = *(i2*)(intptr_t)v1195;
	i4 v1197 = v1196;
	f61(v1197);

endsub:;
}

// E_h workspace at ws+712 length ws+25
void f64(i1 p1202 /* width */, i4 p1203 /* value */) {
	*(i4*)(intptr_t)(ws+712) = p1203; /*value */
	*(i1*)(intptr_t)(ws+716) = p1202; /*width */

	i8 v1204 = (i8)(intptr_t)(ws+712);
	i4 v1205 = *(i4*)(intptr_t)v1204;
	i1 v1206 = (i1)+16;
	i8 v1207 = (i8)(intptr_t)(ws+717);
	i8 v1208;
	f13(&v1208, v1207, v1206, v1205);
	i8 v1209 = (i8)(intptr_t)(ws+728);
	*(i8*)(intptr_t)v1209 = v1208;

	i8 v1210 = (i8)(intptr_t)(ws+716);
	i1 v1211 = *(i1*)(intptr_t)v1210;
	i8 v1212 = (i8)(intptr_t)(ws+728);
	i8 v1213 = *(i8*)(intptr_t)v1212;
	i8 v1214 = (i8)(intptr_t)(ws+717);
	i8 v1215 = v1213-v1214;
	i1 v1216 = v1215;
	i1 v1217 = v1211-v1216;
	i8 v1218 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1218 = v1217;

c02_0111:;

	i8 v1219 = (i8)(intptr_t)(ws+736);
	i1 v1220 = *(i1*)(intptr_t)v1219;
	i1 v1221 = (i1)+0;
	if (v1220==v1221) goto c02_0114; else goto c02_0113;

c02_0113:;

	i1 v1222 = (i1)+48;
	f59(v1222);

	i8 v1223 = (i8)(intptr_t)(ws+736);
	i1 v1224 = *(i1*)(intptr_t)v1223;
	i1 v1225 = v1224+(-1);
	i8 v1226 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1226 = v1225;

	goto c02_0111;

c02_0114:;

	i8 v1227 = (i8)(intptr_t)(ws+717);
	f60(v1227);

endsub:;
}

// E_h8 workspace at ws+704 length ws+1
void f65(i1 p1228 /* value */) {
	*(i1*)(intptr_t)(ws+704) = p1228; /*value */

	i8 v1229 = (i8)(intptr_t)(ws+704);
	i1 v1230 = *(i1*)(intptr_t)v1229;
	i4 v1231 = v1230;
	i1 v1232 = (i1)+2;
	f64(v1232, v1231);

endsub:;
}

// E_h16 workspace at ws+648 length ws+2
void f66(i2 p1233 /* value */) {
	*(i2*)(intptr_t)(ws+648) = p1233; /*value */

	i8 v1234 = (i8)(intptr_t)(ws+648);
	i2 v1235 = *(i2*)(intptr_t)v1234;
	i4 v1236 = v1235;
	i1 v1237 = (i1)+4;
	f64(v1237, v1236);

endsub:;
}
const i1 c02_s000c[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };

// EmitterOpenfile workspace at ws+640 length ws+8
void f67(i8 p1238 /* filename */) {
	*(i8*)(intptr_t)(ws+640) = p1238; /*filename */

	i8 v1239 = (i8)(intptr_t)(ws+52);
	i8 v1240 = (i8)(intptr_t)(ws+640);
	i8 v1241 = *(i8*)(intptr_t)v1240;
	i1 v1242;
	f44(&v1242, v1241, v1239);
	i1 v1243 = (i1)+0;
	if (v1242==v1243) goto c02_0119; else goto c02_0118;

c02_0118:;

	i8 v1244 = (i8)(intptr_t)c02_s000c;
	f57(v1244);

	goto c02_0115;

c02_0119:;

c02_0115:;

endsub:;
}
const i1 c02_s000d[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };

// EmitterClosefile workspace at ws+640 length ws+0
void f68(void) {

	i8 v1245 = (i8)(intptr_t)(ws+52);
	i1 v1246;
	f45(&v1246, v1245);
	i1 v1247 = (i1)+0;
	if (v1246==v1247) goto c02_011e; else goto c02_011d;

c02_011d:;

	i8 v1248 = (i8)(intptr_t)c02_s000d;
	f57(v1248);

	goto c02_011a;

c02_011e:;

c02_011a:;

endsub:;
}

// ArchAlignUp workspace at ws+3096 length ws+8
void f69(i2* p1249 /* newvalue */, i1 p1250 /* alignment */, i2 p1251 /* value */) {
	*(i2*)(intptr_t)(ws+3096) = p1251; /*value */
	*(i1*)(intptr_t)(ws+3098) = p1250; /*alignment */

	i8 v1252 = (i8)(intptr_t)(ws+3098);
	i1 v1253 = *(i1*)(intptr_t)v1252;
	i1 v1254 = v1253+(-1);
	i2 v1255 = v1254;
	i8 v1256 = (i8)(intptr_t)(ws+3102);
	*(i2*)(intptr_t)v1256 = v1255;

	i8 v1257 = (i8)(intptr_t)(ws+3096);
	i2 v1258 = *(i2*)(intptr_t)v1257;
	i8 v1259 = (i8)(intptr_t)(ws+3102);
	i2 v1260 = *(i2*)(intptr_t)v1259;
	i2 v1261 = v1258+v1260;
	i8 v1262 = (i8)(intptr_t)(ws+3102);
	i2 v1263 = *(i2*)(intptr_t)v1262;
	i2 v1264 = ~v1263;
	i2 v1265 = v1261&v1264;
	i8 v1266 = (i8)(intptr_t)(ws+3100);
	*(i2*)(intptr_t)v1266 = v1265;

endsub:;
	*p1249 = *(i2*)(intptr_t)(ws+3100);
}
const i1 c02_s000e[] = { 0x66,0 };

// ArchEmitSubRef workspace at ws+704 length ws+2
void f71(i2 p1268 /* subid */) {
	*(i2*)(intptr_t)(ws+704) = p1268; /*subid */

	i8 v1269 = (i8)(intptr_t)c02_s000e;
	f60(v1269);

	i8 v1270 = (i8)(intptr_t)(ws+704);
	i2 v1271 = *(i2*)(intptr_t)v1270;
	f62(v1271);

endsub:;
}
const i1 c02_s000f[] = { 0x77,0x73,0x2b,0 };

// ArchEmitWSRef workspace at ws+704 length ws+4
void f72(i2 p1272 /* address */, i1 p1273 /* wid */) {
	*(i1*)(intptr_t)(ws+704) = p1273; /*wid */
	*(i2*)(intptr_t)(ws+706) = p1272; /*address */

	i8 v1274 = (i8)(intptr_t)c02_s000f;
	f60(v1274);

	i8 v1275 = (i8)(intptr_t)(ws+706);
	i2 v1276 = *(i2*)(intptr_t)v1275;
	f62(v1276);

endsub:;
}
const i1 c02_s0010[] = { 0x23,0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x22,0x63,0x6f,0x77,0x67,0x6f,0x6c,0x2e,0x68,0x22,0x0a,0 };
const i1 c02_s0011[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x38,0x20,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x5b,0x30,0x78,0 };
const i1 c02_s0012[] = { 0x5d,0x3b,0x0a,0 };
const i1 c02_s0013[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x31,0x2a,0x20,0x77,0x73,0x20,0x3d,0x20,0x28,0x69,0x31,0x2a,0x29,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x3b,0x0a,0 };

// ArchEmitHeader workspace at ws+640 length ws+8
void f73(i8 p1277 /* coo */) {
	*(i8*)(intptr_t)(ws+640) = p1277; /*coo */

	i8 v1278 = (i8)(intptr_t)c02_s0010;
	f60(v1278);

	i8 v1279 = (i8)(intptr_t)c02_s0011;
	f60(v1279);

	i8 v1280 = (i8)(intptr_t)(ws+576);
	i2 v1281 = *(i2*)(intptr_t)v1280;
	i2 v1282 = v1281+(+7);
	i1 v1283 = (i1)+3;
	i2 v1284 = ((i2)v1282)>>v1283;
	f66(v1284);

	i8 v1285 = (i8)(intptr_t)c02_s0012;
	f60(v1285);

	i8 v1286 = (i8)(intptr_t)c02_s0013;
	f60(v1286);

endsub:;
}
const i1 c02_s0014[] = { 0x76,0x6f,0x69,0x64,0x20,0x63,0x6d,0x61,0x69,0x6e,0x28,0x76,0x6f,0x69,0x64,0x29,0x20,0x7b,0x0a,0 };
const i1 c02_s0015[] = { 0x28,0x29,0x3b,0x0a,0 };
const i1 c02_s0016[] = { 0x7d,0x0a,0 };

// ArchEmitFooter workspace at ws+640 length ws+20
void f74(i8 p1287 /* coo */) {
	*(i8*)(intptr_t)(ws+640) = p1287; /*coo */

	i8 v1288 = (i8)(intptr_t)c02_s0014;
	f60(v1288);

c02_0121:;

	i8 v1289 = (i8)(intptr_t)(ws+640);
	i8 v1290 = *(i8*)(intptr_t)v1289;
	i8 v1291 = (i8)+0;
	if (v1290==v1291) goto c02_0124; else goto c02_0123;

c02_0123:;

	i8 v1292 = (i8)(intptr_t)(ws+640);
	i8 v1293 = *(i8*)(intptr_t)v1292;
	i8 v1294 = v1293+(+536);
	i8 v1295 = *(i8*)(intptr_t)v1294;
	i8 v1296 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v1296 = v1295;

	i8 v1297 = (i8)(intptr_t)(ws+648);
	i8 v1298 = *(i8*)(intptr_t)v1297;
	i8 v1299 = (i8)+0;
	if (v1298==v1299) goto c02_0129; else goto c02_0128;

c02_0128:;

	i1 v1300 = (i1)+9;
	f59(v1300);

	i8 v1301 = (i8)(intptr_t)(ws+648);
	i8 v1302 = *(i8*)(intptr_t)v1301;
	i8 v1303 = v1302+(+186);
	i2 v1304 = *(i2*)(intptr_t)v1303;
	f71(v1304);

	i8 v1305 = (i8)(intptr_t)c02_s0015;
	f60(v1305);

	goto c02_0125;

c02_0129:;

c02_0125:;

	i8 v1306 = (i8)(intptr_t)(ws+640);
	i8 v1307 = *(i8*)(intptr_t)v1306;
	i8 v1308 = v1307+(+664);
	i8 v1309 = *(i8*)(intptr_t)v1308;
	i8 v1310 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v1310 = v1309;

	goto c02_0121;

c02_0124:;

	i8 v1311 = (i8)(intptr_t)c02_s0016;
	f60(v1311);

	i8 v1312 = (i8)(intptr_t)(ws+52);
	i4 v1313;
	f48(&v1313, v1312);
	i8 v1314 = (i8)(intptr_t)(ws+52);
	i4 v1315;
	f47(&v1315, v1314);
	i4 v1316 = v1313-v1315;
	i8 v1317 = (i8)(intptr_t)(ws+656);
	*(i4*)(intptr_t)v1317 = v1316;

c02_012c:;

	i8 v1318 = (i8)(intptr_t)(ws+656);
	i4 v1319 = *(i4*)(intptr_t)v1318;
	i4 v1320 = (i4)+0;
	if (v1319==v1320) goto c02_012f; else goto c02_012e;

c02_012e:;

	i1 v1321 = (i1)+32;
	f59(v1321);

	i8 v1322 = (i8)(intptr_t)(ws+656);
	i4 v1323 = *(i4*)(intptr_t)v1322;
	i4 v1324 = v1323+(-1);
	i8 v1325 = (i8)(intptr_t)(ws+656);
	*(i4*)(intptr_t)v1325 = v1324;

	goto c02_012c;

c02_012f:;

endsub:;
}

// getchar workspace at ws+768 length ws+9
void f75(i1* p1330 /* c */, i8 p1331 /* fcb */) {
	*(i8*)(intptr_t)(ws+768) = p1331; /*fcb */

	i8 v1332 = (i8)(intptr_t)(ws+585);
	i1 v1333 = *(i1*)(intptr_t)v1332;
	i1 v1334 = (i1)+0;
	if (v1333==v1334) goto c02_0133; else goto c02_0134;

c02_0133:;

	i8 v1335 = (i8)(intptr_t)(ws+768);
	i8 v1336 = *(i8*)(intptr_t)v1335;
	i1 v1337;
	f50(&v1337, v1336);
	i8 v1338 = (i8)(intptr_t)(ws+776);
	*(i1*)(intptr_t)v1338 = v1337;

	goto c02_0130;

c02_0134:;

	i8 v1339 = (i8)(intptr_t)(ws+585);
	i1 v1340 = *(i1*)(intptr_t)v1339;
	i8 v1341 = (i8)(intptr_t)(ws+776);
	*(i1*)(intptr_t)v1341 = v1340;

	i1 v1342 = (i1)+0;
	i8 v1343 = (i8)(intptr_t)(ws+585);
	*(i1*)(intptr_t)v1343 = v1342;

c02_0130:;

endsub:;
	*p1330 = *(i1*)(intptr_t)(ws+776);
}
const i1 c02_s0017[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x68,0x65,0x78,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x69,0x6e,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0x20,0x61,0x74,0x20,0x6f,0x66,0x66,0x73,0x65,0x74,0x20,0x30,0x78,0 };

// read_hex workspace at ws+744 length ws+17
void f77(i4* p1348 /* val */, i1 p1349 /* len */, i8 p1350 /* fcb */) {
	*(i8*)(intptr_t)(ws+744) = p1350; /*fcb */
	*(i1*)(intptr_t)(ws+752) = p1349; /*len */

	i4 v1351 = (i4)+0;
	i8 v1352 = (i8)(intptr_t)(ws+756);
	*(i4*)(intptr_t)v1352 = v1351;

c02_0135:;

	i8 v1353 = (i8)(intptr_t)(ws+744);
	i8 v1354 = *(i8*)(intptr_t)v1353;
	i1 v1355;
	f75(&v1355, v1354);
	i8 v1356 = (i8)(intptr_t)(ws+760);
	*(i1*)(intptr_t)v1356 = v1355;

	i8 v1357 = (i8)(intptr_t)(ws+760);
	i1 v1358 = *(i1*)(intptr_t)v1357;
	i1 v1359 = (i1)+48;
	if (v1358<v1359) goto c02_013d; else goto c02_013e;

c02_013e:;

	i1 v1360 = (i1)+57;
	i8 v1361 = (i8)(intptr_t)(ws+760);
	i1 v1362 = *(i1*)(intptr_t)v1361;
	if (v1360<v1362) goto c02_013d; else goto c02_013c;

c02_013c:;

	i8 v1363 = (i8)(intptr_t)(ws+760);
	i1 v1364 = *(i1*)(intptr_t)v1363;
	i1 v1365 = v1364+(-48);
	i8 v1366 = (i8)(intptr_t)(ws+760);
	*(i1*)(intptr_t)v1366 = v1365;

	goto c02_0137;

c02_013d:;

	i8 v1367 = (i8)(intptr_t)(ws+760);
	i1 v1368 = *(i1*)(intptr_t)v1367;
	i1 v1369 = v1368&(-33);
	i8 v1370 = (i8)(intptr_t)(ws+760);
	*(i1*)(intptr_t)v1370 = v1369;

	i8 v1371 = (i8)(intptr_t)(ws+760);
	i1 v1372 = *(i1*)(intptr_t)v1371;
	i1 v1373 = (i1)+65;
	if (v1372<v1373) goto c02_0145; else goto c02_0146;

c02_0146:;

	i1 v1374 = (i1)+70;
	i8 v1375 = (i8)(intptr_t)(ws+760);
	i1 v1376 = *(i1*)(intptr_t)v1375;
	if (v1374<v1376) goto c02_0145; else goto c02_0144;

c02_0144:;

	i8 v1377 = (i8)(intptr_t)(ws+760);
	i1 v1378 = *(i1*)(intptr_t)v1377;
	i1 v1379 = v1378+(-55);
	i8 v1380 = (i8)(intptr_t)(ws+760);
	*(i1*)(intptr_t)v1380 = v1379;

	goto c02_013f;

c02_0145:;

	f55();

	i8 v1381 = (i8)(intptr_t)c02_s0017;
	f11(v1381);

	i8 v1382 = (i8)(intptr_t)(ws+744);
	i8 v1383 = *(i8*)(intptr_t)v1382;
	i4 v1384;
	f47(&v1384, v1383);
	i4 v1385 = v1384+(-1);
	f20(v1385);

	f56();

c02_013f:;

c02_0137:;

	i8 v1386 = (i8)(intptr_t)(ws+756);
	i4 v1387 = *(i4*)(intptr_t)v1386;
	i1 v1388 = (i1)+4;
	i4 v1389 = ((i4)v1387)<<v1388;
	i8 v1390 = (i8)(intptr_t)(ws+760);
	i1 v1391 = *(i1*)(intptr_t)v1390;
	i4 v1392 = v1391;
	i4 v1393 = v1389+v1392;
	i8 v1394 = (i8)(intptr_t)(ws+756);
	*(i4*)(intptr_t)v1394 = v1393;

	i8 v1395 = (i8)(intptr_t)(ws+752);
	i1 v1396 = *(i1*)(intptr_t)v1395;
	i1 v1397 = v1396+(-1);
	i8 v1398 = (i8)(intptr_t)(ws+752);
	*(i1*)(intptr_t)v1398 = v1397;

	i8 v1399 = (i8)(intptr_t)(ws+752);
	i1 v1400 = *(i1*)(intptr_t)v1399;
	i1 v1401 = (i1)+0;
	if (v1400==v1401) goto c02_014a; else goto c02_014b;

c02_014a:;

	goto c02_0136;

	goto c02_0147;

c02_014b:;

c02_0147:;

	goto c02_0135;

c02_0136:;

endsub:;
	*p1348 = *(i4*)(intptr_t)(ws+756);
}

// read_hex2 workspace at ws+728 length ws+9
void f78(i1* p1402 /* val */, i8 p1403 /* fcb */) {
	*(i8*)(intptr_t)(ws+728) = p1403; /*fcb */

	i8 v1404 = (i8)(intptr_t)(ws+728);
	i8 v1405 = *(i8*)(intptr_t)v1404;
	i1 v1406 = (i1)+2;
	i4 v1407;
	f77(&v1407, v1406, v1405);
	i1 v1408 = v1407;
	i8 v1409 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1409 = v1408;

endsub:;
	*p1402 = *(i1*)(intptr_t)(ws+736);
}

// read_hex4 workspace at ws+728 length ws+10
void f79(i2* p1410 /* val */, i8 p1411 /* fcb */) {
	*(i8*)(intptr_t)(ws+728) = p1411; /*fcb */

	i8 v1412 = (i8)(intptr_t)(ws+728);
	i8 v1413 = *(i8*)(intptr_t)v1412;
	i1 v1414 = (i1)+4;
	i4 v1415;
	f77(&v1415, v1414, v1413);
	i2 v1416 = v1415;
	i8 v1417 = (i8)(intptr_t)(ws+736);
	*(i2*)(intptr_t)v1417 = v1416;

endsub:;
	*p1410 = *(i2*)(intptr_t)(ws+736);
}

// read_string workspace at ws+728 length ws+32
void f80(i8* p1418 /* ptr */, i1 p1419 /* len */, i8 p1420 /* fcb */) {
	*(i8*)(intptr_t)(ws+728) = p1420; /*fcb */
	*(i1*)(intptr_t)(ws+736) = p1419; /*len */

	i8 v1421 = (i8)(intptr_t)(ws+736);
	i1 v1422 = *(i1*)(intptr_t)v1421;
	i1 v1423 = v1422+(+1);
	i8 v1424 = v1423;
	i8 v1425;
	f33(&v1425, v1424);
	i8 v1426 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1426 = v1425;

	i8 v1427 = (i8)(intptr_t)(ws+744);
	i8 v1428 = *(i8*)(intptr_t)v1427;
	i8 v1429 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v1429 = v1428;

c02_014c:;

	i8 v1430 = (i8)(intptr_t)(ws+736);
	i1 v1431 = *(i1*)(intptr_t)v1430;
	i1 v1432 = (i1)+0;
	if (v1431==v1432) goto c02_0151; else goto c02_0152;

c02_0151:;

	goto c02_014d;

	goto c02_014e;

c02_0152:;

c02_014e:;

	i8 v1433 = (i8)(intptr_t)(ws+728);
	i8 v1434 = *(i8*)(intptr_t)v1433;
	i1 v1435;
	f75(&v1435, v1434);
	i8 v1436 = (i8)(intptr_t)(ws+752);
	i8 v1437 = *(i8*)(intptr_t)v1436;
	*(i1*)(intptr_t)v1437 = v1435;

	i8 v1438 = (i8)(intptr_t)(ws+752);
	i8 v1439 = *(i8*)(intptr_t)v1438;
	i8 v1440 = v1439+(+1);
	i8 v1441 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v1441 = v1440;

	i8 v1442 = (i8)(intptr_t)(ws+736);
	i1 v1443 = *(i1*)(intptr_t)v1442;
	i1 v1444 = v1443+(-1);
	i8 v1445 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1445 = v1444;

	goto c02_014c;

c02_014d:;

endsub:;
	*p1418 = *(i8*)(intptr_t)(ws+744);
}

// AddRef workspace at ws+728 length ws+32
void f81(i8 p1446 /* calls */, i8 p1447 /* subr */) {
	*(i8*)(intptr_t)(ws+728) = p1447; /*subr */
	*(i8*)(intptr_t)(ws+736) = p1446; /*calls */

	i8 v1448 = (i8)(intptr_t)(ws+728);
	i8 v1449 = *(i8*)(intptr_t)v1448;
	i8 v1450 = v1449+(+184);
	i2 v1451 = *(i2*)(intptr_t)v1450;
	i8 v1452 = (i8)(intptr_t)(ws+744);
	*(i2*)(intptr_t)v1452 = v1451;

	i8 v1453 = (i8)(intptr_t)(ws+744);
	i2 v1454 = *(i2*)(intptr_t)v1453;
	i2 v1455 = v1454+(+1);
	i8 v1456 = (i8)(intptr_t)(ws+728);
	i8 v1457 = *(i8*)(intptr_t)v1456;
	i8 v1458 = v1457+(+184);
	*(i2*)(intptr_t)v1458 = v1455;

	i8 v1459 = (i8)(intptr_t)(ws+728);
	i8 v1460 = *(i8*)(intptr_t)v1459;
	i8 v1461 = v1460+(+16);
	i8 v1462 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v1462 = v1461;

c02_0155:;

	i8 v1463 = (i8)(intptr_t)(ws+744);
	i2 v1464 = *(i2*)(intptr_t)v1463;
	i2 v1465 = (i2)+16;
	if (v1464<v1465) goto c02_0158; else goto c02_0157;

c02_0157:;

	i8 v1466 = (i8)(intptr_t)(ws+752);
	i8 v1467 = *(i8*)(intptr_t)v1466;
	i8 v1468 = *(i8*)(intptr_t)v1467;
	i8 v1469 = (i8)+0;
	if (v1468==v1469) goto c02_015c; else goto c02_015d;

c02_015c:;

	i8 v1470 = (i8)+136;
	i8 v1471;
	f33(&v1471, v1470);
	i8 v1472 = (i8)(intptr_t)(ws+752);
	i8 v1473 = *(i8*)(intptr_t)v1472;
	*(i8*)(intptr_t)v1473 = v1471;

	goto c02_0159;

c02_015d:;

c02_0159:;

	i8 v1474 = (i8)(intptr_t)(ws+752);
	i8 v1475 = *(i8*)(intptr_t)v1474;
	i8 v1476 = *(i8*)(intptr_t)v1475;
	i8 v1477 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v1477 = v1476;

	i8 v1478 = (i8)(intptr_t)(ws+744);
	i2 v1479 = *(i2*)(intptr_t)v1478;
	i2 v1480 = v1479+(-16);
	i8 v1481 = (i8)(intptr_t)(ws+744);
	*(i2*)(intptr_t)v1481 = v1480;

	goto c02_0155;

c02_0158:;

	i8 v1482 = (i8)(intptr_t)(ws+736);
	i8 v1483 = *(i8*)(intptr_t)v1482;
	i8 v1484 = (i8)(intptr_t)(ws+752);
	i8 v1485 = *(i8*)(intptr_t)v1484;
	i8 v1486 = v1485+(+8);
	i8 v1487 = (i8)(intptr_t)(ws+744);
	i2 v1488 = *(i2*)(intptr_t)v1487;
	i1 v1489 = v1488;
	i8 v1490 = v1489;
	i1 v1491 = (i1)+3;
	i8 v1492 = ((i8)v1490)<<v1491;
	i8 v1493 = v1486+v1492;
	*(i8*)(intptr_t)v1493 = v1483;

endsub:;
}

// FindSub workspace at ws+760 length ws+32
void f82(i8* p1494 /* ptr */, i2 p1495 /* id */, i8 p1496 /* coo */) {
	*(i8*)(intptr_t)(ws+760) = p1496; /*coo */
	*(i2*)(intptr_t)(ws+768) = p1495; /*id */

	i8 v1497 = (i8)(intptr_t)(ws+760);
	i8 v1498 = *(i8*)(intptr_t)v1497;
	i8 v1499 = v1498+(+528);
	i8 v1500 = (i8)(intptr_t)(ws+784);
	*(i8*)(intptr_t)v1500 = v1499;

c02_0160:;

	i8 v1501 = (i8)(intptr_t)(ws+768);
	i2 v1502 = *(i2*)(intptr_t)v1501;
	i2 v1503 = (i2)+16;
	if (v1502<v1503) goto c02_0163; else goto c02_0162;

c02_0162:;

	i8 v1504 = (i8)(intptr_t)(ws+784);
	i8 v1505 = *(i8*)(intptr_t)v1504;
	i8 v1506 = *(i8*)(intptr_t)v1505;
	i8 v1507 = (i8)+0;
	if (v1506==v1507) goto c02_0167; else goto c02_0168;

c02_0167:;

	i8 v1508 = (i8)+136;
	i8 v1509;
	f33(&v1509, v1508);
	i8 v1510 = (i8)(intptr_t)(ws+784);
	i8 v1511 = *(i8*)(intptr_t)v1510;
	*(i8*)(intptr_t)v1511 = v1509;

	goto c02_0164;

c02_0168:;

c02_0164:;

	i8 v1512 = (i8)(intptr_t)(ws+784);
	i8 v1513 = *(i8*)(intptr_t)v1512;
	i8 v1514 = *(i8*)(intptr_t)v1513;
	i8 v1515 = (i8)(intptr_t)(ws+784);
	*(i8*)(intptr_t)v1515 = v1514;

	i8 v1516 = (i8)(intptr_t)(ws+768);
	i2 v1517 = *(i2*)(intptr_t)v1516;
	i2 v1518 = v1517+(-16);
	i8 v1519 = (i8)(intptr_t)(ws+768);
	*(i2*)(intptr_t)v1519 = v1518;

	goto c02_0160;

c02_0163:;

	i8 v1520 = (i8)(intptr_t)(ws+784);
	i8 v1521 = *(i8*)(intptr_t)v1520;
	i8 v1522 = v1521+(+8);
	i8 v1523 = (i8)(intptr_t)(ws+768);
	i2 v1524 = *(i2*)(intptr_t)v1523;
	i1 v1525 = v1524;
	i8 v1526 = v1525;
	i1 v1527 = (i1)+3;
	i8 v1528 = ((i8)v1526)<<v1527;
	i8 v1529 = v1522+v1528;
	i8 v1530 = (i8)(intptr_t)(ws+776);
	*(i8*)(intptr_t)v1530 = v1529;

endsub:;
	*p1494 = *(i8*)(intptr_t)(ws+776);
}

// FindOrCreateSub workspace at ws+728 length ws+32
void f83(i8* p1531 /* subroutine */, i2 p1532 /* id */, i8 p1533 /* coo */) {
	*(i8*)(intptr_t)(ws+728) = p1533; /*coo */
	*(i2*)(intptr_t)(ws+736) = p1532; /*id */

	i8 v1534 = (i8)(intptr_t)(ws+728);
	i8 v1535 = *(i8*)(intptr_t)v1534;
	i8 v1536 = (i8)(intptr_t)(ws+736);
	i2 v1537 = *(i2*)(intptr_t)v1536;
	i8 v1538;
	f82(&v1538, v1537, v1535);
	i8 v1539 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v1539 = v1538;

	i8 v1540 = (i8)(intptr_t)(ws+752);
	i8 v1541 = *(i8*)(intptr_t)v1540;
	i8 v1542 = *(i8*)(intptr_t)v1541;
	i8 v1543 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1543 = v1542;

	i8 v1544 = (i8)(intptr_t)(ws+744);
	i8 v1545 = *(i8*)(intptr_t)v1544;
	i8 v1546 = (i8)+0;
	if (v1545==v1546) goto c02_016c; else goto c02_016d;

c02_016c:;

	i8 v1547 = (i8)+189;
	i8 v1548;
	f33(&v1548, v1547);
	i8 v1549 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1549 = v1548;

	i8 v1550 = (i8)(intptr_t)(ws+728);
	i8 v1551 = *(i8*)(intptr_t)v1550;
	i8 v1552 = (i8)(intptr_t)(ws+744);
	i8 v1553 = *(i8*)(intptr_t)v1552;
	*(i8*)(intptr_t)v1553 = v1551;

	i8 v1554 = (i8)(intptr_t)(ws+40);
	i8 v1555 = *(i8*)(intptr_t)v1554;
	i8 v1556 = (i8)(intptr_t)(ws+744);
	i8 v1557 = *(i8*)(intptr_t)v1556;
	i8 v1558 = v1557+(+8);
	*(i8*)(intptr_t)v1558 = v1555;

	i8 v1559 = (i8)(intptr_t)(ws+744);
	i8 v1560 = *(i8*)(intptr_t)v1559;
	i8 v1561 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v1561 = v1560;

	i8 v1562 = (i8)(intptr_t)(ws+48);
	i2 v1563 = *(i2*)(intptr_t)v1562;
	i8 v1564 = (i8)(intptr_t)(ws+744);
	i8 v1565 = *(i8*)(intptr_t)v1564;
	i8 v1566 = v1565+(+186);
	*(i2*)(intptr_t)v1566 = v1563;

	i8 v1567 = (i8)(intptr_t)(ws+744);
	i8 v1568 = *(i8*)(intptr_t)v1567;
	i8 v1569 = (i8)(intptr_t)(ws+752);
	i8 v1570 = *(i8*)(intptr_t)v1569;
	*(i8*)(intptr_t)v1570 = v1568;

	i8 v1571 = (i8)(intptr_t)(ws+48);
	i2 v1572 = *(i2*)(intptr_t)v1571;
	i2 v1573 = v1572+(+1);
	i8 v1574 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v1574 = v1573;

	goto c02_0169;

c02_016d:;

c02_0169:;

endsub:;
	*p1531 = *(i8*)(intptr_t)(ws+744);
}

// Deref workspace at ws+3096 length ws+24
void f84(i8* p1575 /* subout */, i8 p1576 /* subin */) {
	*(i8*)(intptr_t)(ws+3096) = p1576; /*subin */

	i8 v1577 = (i8)(intptr_t)(ws+3096);
	i8 v1578 = *(i8*)(intptr_t)v1577;
	i8 v1579 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v1579 = v1578;

	i8 v1580 = (i8)(intptr_t)(ws+3096);
	i8 v1581 = *(i8*)(intptr_t)v1580;
	i8 v1582 = (i8)+0;
	if (v1581==v1582) goto c02_0172; else goto c02_0171;

c02_0171:;

	i8 v1583 = (i8)(intptr_t)(ws+3096);
	i8 v1584 = *(i8*)(intptr_t)v1583;
	i8 v1585 = v1584+(+160);
	i8 v1586 = *(i8*)(intptr_t)v1585;
	i8 v1587 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v1587 = v1586;

	i8 v1588 = (i8)(intptr_t)(ws+3112);
	i8 v1589 = *(i8*)(intptr_t)v1588;
	i8 v1590 = (i8)+0;
	if (v1589==v1590) goto c02_0177; else goto c02_0176;

c02_0176:;

	i8 v1591 = (i8)(intptr_t)(ws+3112);
	i8 v1592 = *(i8*)(intptr_t)v1591;
	i8 v1593 = v1592+(+16);
	i8 v1594 = *(i8*)(intptr_t)v1593;
	i8 v1595 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v1595 = v1594;

	goto c02_0173;

c02_0177:;

c02_0173:;

	goto c02_016e;

c02_0172:;

c02_016e:;

endsub:;
	*p1575 = *(i8*)(intptr_t)(ws+3104);
}

// FindOrCreateExternal workspace at ws+728 length ws+16
void f85(i8* p1596 /* external */, i8 p1597 /* name */) {
	*(i8*)(intptr_t)(ws+728) = p1597; /*name */

	i8 v1598 = (i8)(intptr_t)(ws+32);
	i8 v1599 = *(i8*)(intptr_t)v1598;
	i8 v1600 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v1600 = v1599;

c02_017a:;

	i8 v1601 = (i8)(intptr_t)(ws+736);
	i8 v1602 = *(i8*)(intptr_t)v1601;
	i8 v1603 = (i8)+0;
	if (v1602==v1603) goto c02_017d; else goto c02_017c;

c02_017c:;

	i8 v1604 = (i8)(intptr_t)(ws+736);
	i8 v1605 = *(i8*)(intptr_t)v1604;
	i8 v1606 = v1605+(+8);
	i8 v1607 = *(i8*)(intptr_t)v1606;
	i8 v1608 = (i8)(intptr_t)(ws+728);
	i8 v1609 = *(i8*)(intptr_t)v1608;
	i1 v1610;
	f25(&v1610, v1609, v1607);
	i1 v1611 = (i1)+0;
	if (v1610==v1611) goto c02_0181; else goto c02_0182;

c02_0181:;

	goto endsub;

	goto c02_017e;

c02_0182:;

c02_017e:;

	i8 v1612 = (i8)(intptr_t)(ws+736);
	i8 v1613 = *(i8*)(intptr_t)v1612;
	i8 v1614 = *(i8*)(intptr_t)v1613;
	i8 v1615 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v1615 = v1614;

	goto c02_017a;

c02_017d:;

	i8 v1616 = (i8)+24;
	i8 v1617;
	f33(&v1617, v1616);
	i8 v1618 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v1618 = v1617;

	i8 v1619 = (i8)(intptr_t)(ws+32);
	i8 v1620 = *(i8*)(intptr_t)v1619;
	i8 v1621 = (i8)(intptr_t)(ws+736);
	i8 v1622 = *(i8*)(intptr_t)v1621;
	*(i8*)(intptr_t)v1622 = v1620;

	i8 v1623 = (i8)(intptr_t)(ws+728);
	i8 v1624 = *(i8*)(intptr_t)v1623;
	i8 v1625;
	f37(&v1625, v1624);
	i8 v1626 = (i8)(intptr_t)(ws+736);
	i8 v1627 = *(i8*)(intptr_t)v1626;
	i8 v1628 = v1627+(+8);
	*(i8*)(intptr_t)v1628 = v1625;

	i8 v1629 = (i8)(intptr_t)(ws+736);
	i8 v1630 = *(i8*)(intptr_t)v1629;
	i8 v1631 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1631 = v1630;

endsub:;
	*p1596 = *(i8*)(intptr_t)(ws+736);
}
const i1 c02_s0018[] = { 0x6d,0x75,0x6c,0x74,0x69,0x70,0x6c,0x65,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x64,0x65,0x63,0x6c,0x61,0x72,0x61,0x74,0x69,0x6f,0x6e,0x73,0 };
const i1 c02_s0019[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x75,0x6e,0x73,0x75,0x70,0x70,0x6f,0x72,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x27,0 };
const i1 c02_s001a[] = { 0x27,0x20,0x69,0x6e,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0x0a,0 };

// OpenAndLoadCoo workspace at ws+664 length ws+64
void f86(i8* p1632 /* coo */, i8 p1633 /* filename */) {
	*(i8*)(intptr_t)(ws+664) = p1633; /*filename */

	i8 v1634 = (i8)+674;
	i8 v1635;
	f33(&v1635, v1634);
	i8 v1636 = (i8)(intptr_t)(ws+672);
	*(i8*)(intptr_t)v1636 = v1635;

	i8 v1637 = (i8)(intptr_t)(ws+48);
	i2 v1638 = *(i2*)(intptr_t)v1637;
	i8 v1639 = (i8)(intptr_t)(ws+672);
	i8 v1640 = *(i8*)(intptr_t)v1639;
	i8 v1641 = v1640+(+672);
	*(i2*)(intptr_t)v1641 = v1638;

	i8 v1642 = (i8)(intptr_t)(ws+48);
	i2 v1643 = *(i2*)(intptr_t)v1642;
	i2 v1644 = v1643+(+1);
	i8 v1645 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v1645 = v1644;

	i8 v1646 = (i8)(intptr_t)(ws+672);
	i8 v1647 = *(i8*)(intptr_t)v1646;
	i8 v1648 = (i8)(intptr_t)(ws+664);
	i8 v1649 = *(i8*)(intptr_t)v1648;
	i1 v1650;
	f42(&v1650, v1649, v1647);
	i1 v1651 = (i1)+0;
	if (v1650==v1651) goto c02_0187; else goto c02_0186;

c02_0186:;

	i8 v1652 = (i8)(intptr_t)(ws+664);
	i8 v1653 = *(i8*)(intptr_t)v1652;
	f58(v1653);

	goto c02_0183;

c02_0187:;

c02_0183:;

c02_0188:;

	i8 v1654 = (i8)(intptr_t)(ws+672);
	i8 v1655 = *(i8*)(intptr_t)v1654;
	i1 v1656;
	f75(&v1656, v1655);
	i8 v1657 = (i8)(intptr_t)(ws+682);
	*(i1*)(intptr_t)v1657 = v1656;

	i8 v1658 = (i8)(intptr_t)(ws+672);
	i8 v1659 = *(i8*)(intptr_t)v1658;
	i2 v1660;
	f79(&v1660, v1659);
	i8 v1661 = (i8)(intptr_t)(ws+684);
	*(i2*)(intptr_t)v1661 = v1660;

	i8 v1662 = (i8)(intptr_t)(ws+672);
	i8 v1663 = *(i8*)(intptr_t)v1662;
	i4 v1664;
	f47(&v1664, v1663);
	i8 v1665 = (i8)(intptr_t)(ws+688);
	*(i4*)(intptr_t)v1665 = v1664;

	i8 v1666 = (i8)(intptr_t)(ws+682);
	i1 v1667 = *(i1*)(intptr_t)v1666;
	i1 v1668 = (i1)+69;
	if (v1667==v1668) goto c02_018d; else goto c02_018e;

c02_018d:;

	goto c02_0189;

	goto c02_018a;

c02_018e:;

	i8 v1669 = (i8)(intptr_t)(ws+682);
	i1 v1670 = *(i1*)(intptr_t)v1669;
	i1 v1671 = (i1)+83;
	if (v1670==v1671) goto c02_0191; else goto c02_0192;

c02_0191:;

	i8 v1672 = (i8)(intptr_t)(ws+672);
	i8 v1673 = *(i8*)(intptr_t)v1672;
	i2 v1674;
	f79(&v1674, v1673);
	i8 v1675 = (i8)(intptr_t)(ws+680);
	*(i2*)(intptr_t)v1675 = v1674;

	i8 v1676 = (i8)(intptr_t)(ws+672);
	i8 v1677 = *(i8*)(intptr_t)v1676;
	i8 v1678 = (i8)(intptr_t)(ws+680);
	i2 v1679 = *(i2*)(intptr_t)v1678;
	i8 v1680;
	f83(&v1680, v1679, v1677);
	i8 v1681 = (i8)(intptr_t)(ws+696);
	*(i8*)(intptr_t)v1681 = v1680;

	i8 v1682 = (i8)(intptr_t)(ws+696);
	i8 v1683 = *(i8*)(intptr_t)v1682;
	i8 v1684 = v1683+(+188);
	i1 v1685 = *(i1*)(intptr_t)v1684;
	i1 v1686 = v1685|(+2);
	i8 v1687 = (i8)(intptr_t)(ws+696);
	i8 v1688 = *(i8*)(intptr_t)v1687;
	i8 v1689 = v1688+(+188);
	*(i1*)(intptr_t)v1689 = v1686;

	goto c02_018a;

c02_0192:;

	i8 v1690 = (i8)(intptr_t)(ws+682);
	i1 v1691 = *(i1*)(intptr_t)v1690;
	i1 v1692 = (i1)+82;
	if (v1691==v1692) goto c02_0195; else goto c02_0196;

c02_0195:;

	i8 v1693 = (i8)(intptr_t)(ws+672);
	i8 v1694 = *(i8*)(intptr_t)v1693;
	i2 v1695;
	f79(&v1695, v1694);
	i8 v1696 = (i8)(intptr_t)(ws+704);
	*(i2*)(intptr_t)v1696 = v1695;

	i8 v1697 = (i8)(intptr_t)(ws+672);
	i8 v1698 = *(i8*)(intptr_t)v1697;
	i2 v1699;
	f79(&v1699, v1698);
	i8 v1700 = (i8)(intptr_t)(ws+706);
	*(i2*)(intptr_t)v1700 = v1699;

	i8 v1701 = (i8)(intptr_t)(ws+672);
	i8 v1702 = *(i8*)(intptr_t)v1701;
	i8 v1703 = (i8)(intptr_t)(ws+704);
	i2 v1704 = *(i2*)(intptr_t)v1703;
	i8 v1705;
	f83(&v1705, v1704, v1702);
	i8 v1706 = (i8)(intptr_t)(ws+672);
	i8 v1707 = *(i8*)(intptr_t)v1706;
	i8 v1708 = (i8)(intptr_t)(ws+706);
	i2 v1709 = *(i2*)(intptr_t)v1708;
	i8 v1710;
	f83(&v1710, v1709, v1707);
	f81(v1710, v1705);

	goto c02_018a;

c02_0196:;

	i8 v1711 = (i8)(intptr_t)(ws+682);
	i1 v1712 = *(i1*)(intptr_t)v1711;
	i1 v1713 = (i1)+87;
	if (v1712==v1713) goto c02_0199; else goto c02_019a;

c02_0199:;

	i8 v1714 = (i8)(intptr_t)(ws+672);
	i8 v1715 = *(i8*)(intptr_t)v1714;
	i2 v1716;
	f79(&v1716, v1715);
	i8 v1717 = (i8)(intptr_t)(ws+680);
	*(i2*)(intptr_t)v1717 = v1716;

	i8 v1718 = (i8)(intptr_t)(ws+672);
	i8 v1719 = *(i8*)(intptr_t)v1718;
	i8 v1720 = (i8)(intptr_t)(ws+680);
	i2 v1721 = *(i2*)(intptr_t)v1720;
	i8 v1722;
	f83(&v1722, v1721, v1719);
	i8 v1723 = (i8)(intptr_t)(ws+696);
	*(i8*)(intptr_t)v1723 = v1722;

	i8 v1724 = (i8)(intptr_t)(ws+672);
	i8 v1725 = *(i8*)(intptr_t)v1724;
	i1 v1726;
	f78(&v1726, v1725);
	i8 v1727 = (i8)(intptr_t)(ws+708);
	*(i1*)(intptr_t)v1727 = v1726;

	i8 v1728 = (i8)(intptr_t)(ws+672);
	i8 v1729 = *(i8*)(intptr_t)v1728;
	i2 v1730;
	f79(&v1730, v1729);
	i8 v1731 = (i8)(intptr_t)(ws+696);
	i8 v1732 = *(i8*)(intptr_t)v1731;
	i8 v1733 = v1732+(+168);
	i8 v1734 = (i8)(intptr_t)(ws+708);
	i1 v1735 = *(i1*)(intptr_t)v1734;
	i8 v1736 = v1735;
	i1 v1737 = (i1)+1;
	i8 v1738 = ((i8)v1736)<<v1737;
	i8 v1739 = v1733+v1738;
	*(i2*)(intptr_t)v1739 = v1730;

	goto c02_018a;

c02_019a:;

	i8 v1740 = (i8)(intptr_t)(ws+682);
	i1 v1741 = *(i1*)(intptr_t)v1740;
	i1 v1742 = (i1)+78;
	if (v1741==v1742) goto c02_019d; else goto c02_019e;

c02_019d:;

	i8 v1743 = (i8)(intptr_t)(ws+672);
	i8 v1744 = *(i8*)(intptr_t)v1743;
	i2 v1745;
	f79(&v1745, v1744);
	i8 v1746 = (i8)(intptr_t)(ws+680);
	*(i2*)(intptr_t)v1746 = v1745;

	i8 v1747 = (i8)(intptr_t)(ws+672);
	i8 v1748 = *(i8*)(intptr_t)v1747;
	i8 v1749 = (i8)(intptr_t)(ws+680);
	i2 v1750 = *(i2*)(intptr_t)v1749;
	i8 v1751;
	f83(&v1751, v1750, v1748);
	i8 v1752 = (i8)(intptr_t)(ws+696);
	*(i8*)(intptr_t)v1752 = v1751;

	i8 v1753 = (i8)(intptr_t)(ws+672);
	i8 v1754 = *(i8*)(intptr_t)v1753;
	i8 v1755 = (i8)(intptr_t)(ws+684);
	i2 v1756 = *(i2*)(intptr_t)v1755;
	i1 v1757 = v1756;
	i1 v1758 = v1757+(-4);
	i8 v1759;
	f80(&v1759, v1758, v1754);
	i8 v1760 = (i8)(intptr_t)(ws+696);
	i8 v1761 = *(i8*)(intptr_t)v1760;
	i8 v1762 = v1761+(+152);
	*(i8*)(intptr_t)v1762 = v1759;

	goto c02_018a;

c02_019e:;

	i8 v1763 = (i8)(intptr_t)(ws+682);
	i1 v1764 = *(i1*)(intptr_t)v1763;
	i1 v1765 = (i1)+88;
	if (v1764==v1765) goto c02_01a1; else goto c02_01a2;

c02_01a1:;

	i8 v1766 = (i8)(intptr_t)(ws+672);
	i8 v1767 = *(i8*)(intptr_t)v1766;
	i2 v1768;
	f79(&v1768, v1767);
	i8 v1769 = (i8)(intptr_t)(ws+680);
	*(i2*)(intptr_t)v1769 = v1768;

	i8 v1770 = (i8)(intptr_t)(ws+672);
	i8 v1771 = *(i8*)(intptr_t)v1770;
	i8 v1772 = (i8)(intptr_t)(ws+680);
	i2 v1773 = *(i2*)(intptr_t)v1772;
	i8 v1774;
	f83(&v1774, v1773, v1771);
	i8 v1775 = (i8)(intptr_t)(ws+696);
	*(i8*)(intptr_t)v1775 = v1774;

	i8 v1776 = (i8)(intptr_t)(ws+672);
	i8 v1777 = *(i8*)(intptr_t)v1776;
	i8 v1778 = (i8)(intptr_t)(ws+684);
	i2 v1779 = *(i2*)(intptr_t)v1778;
	i1 v1780 = v1779;
	i1 v1781 = v1780+(-4);
	i8 v1782;
	f80(&v1782, v1781, v1777);
	i8 v1783 = (i8)(intptr_t)(ws+712);
	*(i8*)(intptr_t)v1783 = v1782;

	i8 v1784 = (i8)(intptr_t)(ws+712);
	i8 v1785 = *(i8*)(intptr_t)v1784;
	i8 v1786;
	f85(&v1786, v1785);
	i8 v1787 = (i8)(intptr_t)(ws+720);
	*(i8*)(intptr_t)v1787 = v1786;

	i8 v1788 = (i8)(intptr_t)(ws+696);
	i8 v1789 = *(i8*)(intptr_t)v1788;
	i8 v1790 = v1789+(+160);
	i8 v1791 = *(i8*)(intptr_t)v1790;
	i8 v1792 = (i8)+0;
	if (v1791==v1792) goto c02_01a7; else goto c02_01a6;

c02_01a6:;

	i8 v1793 = (i8)(intptr_t)c02_s0018;
	f57(v1793);

	goto c02_01a3;

c02_01a7:;

c02_01a3:;

	i8 v1794 = (i8)(intptr_t)(ws+720);
	i8 v1795 = *(i8*)(intptr_t)v1794;
	i8 v1796 = (i8)(intptr_t)(ws+696);
	i8 v1797 = *(i8*)(intptr_t)v1796;
	i8 v1798 = v1797+(+160);
	*(i8*)(intptr_t)v1798 = v1795;

	goto c02_018a;

c02_01a2:;

	i8 v1799 = (i8)(intptr_t)c02_s0019;
	f11(v1799);

	i8 v1800 = (i8)(intptr_t)(ws+682);
	i1 v1801 = *(i1*)(intptr_t)v1800;
	f8(v1801);

	i8 v1802 = (i8)(intptr_t)c02_s001a;
	f11(v1802);

	f6();

c02_018a:;

	i8 v1803 = (i8)(intptr_t)(ws+672);
	i8 v1804 = *(i8*)(intptr_t)v1803;
	i8 v1805 = (i8)(intptr_t)(ws+688);
	i4 v1806 = *(i4*)(intptr_t)v1805;
	i8 v1807 = (i8)(intptr_t)(ws+684);
	i2 v1808 = *(i2*)(intptr_t)v1807;
	i4 v1809 = v1808;
	i4 v1810 = v1806+v1809;
	f46(v1810, v1804);

	goto c02_0188;

c02_0189:;

endsub:;
	*p1632 = *(i8*)(intptr_t)(ws+672);
}
const i1 c02_s001b[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };

// MalformedError workspace at ws+712 length ws+8
void f88(i8 p1812 /* s */) {
	*(i8*)(intptr_t)(ws+712) = p1812; /*s */

	i8 v1813 = (i8)(intptr_t)c02_s001b;
	f11(v1813);

	i8 v1814 = (i8)(intptr_t)(ws+712);
	i8 v1815 = *(i8*)(intptr_t)v1814;
	f11(v1815);

	f12();

	f6();

endsub:;
}
const i1 c02_s001c[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0x65,0x6e,0x64,0x20,0x6f,0x66,0x20,0x63,0x68,0x75,0x6e,0x6b,0 };

// UnexpectedEndOfChunk workspace at ws+712 length ws+0
void f89(void) {

	i8 v1816 = (i8)(intptr_t)c02_s001c;
	f88(v1816);

endsub:;
}
const i1 c02_s001d[] = { 0x63,0x68,0x75,0x6e,0x6b,0x20,0x73,0x69,0x7a,0x65,0x20,0x69,0x6e,0x63,0x6f,0x6e,0x73,0x69,0x73,0x74,0x65,0x6e,0x74,0 };

// GetC workspace at ws+704 length ws+0
void f90(void) {

	i8 v1817 = (i8)(intptr_t)(ws+674);
	i2 v1818 = *(i2*)(intptr_t)v1817;
	i2 v1819 = (i2)+0;
	if (v1818==v1819) goto c02_01ab; else goto c02_01ac;

c02_01ab:;

	i8 v1820 = (i8)(intptr_t)c02_s001d;
	f88(v1820);

	goto c02_01a8;

c02_01ac:;

c02_01a8:;

	i8 v1821 = (i8)(intptr_t)(ws+674);
	i2 v1822 = *(i2*)(intptr_t)v1821;
	i2 v1823 = v1822+(-1);
	i8 v1824 = (i8)(intptr_t)(ws+674);
	*(i2*)(intptr_t)v1824 = v1823;

	i8 v1825 = (i8)(intptr_t)(ws+648);
	i8 v1826 = *(i8*)(intptr_t)v1825;
	i1 v1827;
	f75(&v1827, v1826);
	i8 v1828 = (i8)(intptr_t)(ws+672);
	*(i1*)(intptr_t)v1828 = v1827;

endsub:;
}

// ReadH2 workspace at ws+704 length ws+1
void f92(i1* p1835 /* result */) {

	i8 v1836 = (i8)(intptr_t)(ws+674);
	i2 v1837 = *(i2*)(intptr_t)v1836;
	i2 v1838 = (i2)+2;
	if (v1837<v1838) goto c02_01b0; else goto c02_01b1;

c02_01b0:;

	f89();

	goto c02_01ad;

c02_01b1:;

c02_01ad:;

	i8 v1839 = (i8)(intptr_t)(ws+674);
	i2 v1840 = *(i2*)(intptr_t)v1839;
	i2 v1841 = v1840+(-2);
	i8 v1842 = (i8)(intptr_t)(ws+674);
	*(i2*)(intptr_t)v1842 = v1841;

	i8 v1843 = (i8)(intptr_t)(ws+648);
	i8 v1844 = *(i8*)(intptr_t)v1843;
	i1 v1845;
	f78(&v1845, v1844);
	i8 v1846 = (i8)(intptr_t)(ws+704);
	*(i1*)(intptr_t)v1846 = v1845;

endsub:;
	*p1835 = *(i1*)(intptr_t)(ws+704);
}

// ReadH4 workspace at ws+704 length ws+2
void f93(i2* p1847 /* result */) {

	i8 v1848 = (i8)(intptr_t)(ws+674);
	i2 v1849 = *(i2*)(intptr_t)v1848;
	i2 v1850 = (i2)+4;
	if (v1849<v1850) goto c02_01b5; else goto c02_01b6;

c02_01b5:;

	f89();

	goto c02_01b2;

c02_01b6:;

c02_01b2:;

	i8 v1851 = (i8)(intptr_t)(ws+674);
	i2 v1852 = *(i2*)(intptr_t)v1851;
	i2 v1853 = v1852+(-4);
	i8 v1854 = (i8)(intptr_t)(ws+674);
	*(i2*)(intptr_t)v1854 = v1853;

	i8 v1855 = (i8)(intptr_t)(ws+648);
	i8 v1856 = *(i8*)(intptr_t)v1855;
	i2 v1857;
	f79(&v1857, v1856);
	i8 v1858 = (i8)(intptr_t)(ws+704);
	*(i2*)(intptr_t)v1858 = v1857;

endsub:;
	*p1847 = *(i2*)(intptr_t)(ws+704);
}

// CopySourceChunk workspace at ws+680 length ws+20
void f94(void) {

c02_01b9:;

	i8 v1859 = (i8)(intptr_t)(ws+674);
	i2 v1860 = *(i2*)(intptr_t)v1859;
	i2 v1861 = (i2)+0;
	if (v1860==v1861) goto c02_01bc; else goto c02_01bb;

c02_01bb:;

	f90();

	i8 v1862 = (i8)(intptr_t)(ws+672);
	i1 v1863 = *(i1*)(intptr_t)v1862;

	if (v1863 != +3) goto c02_01be;

	i1 v1864 = (i1)+99;
	f59(v1864);

	i8 v1865 = (i8)(intptr_t)(ws+648);
	i8 v1866 = *(i8*)(intptr_t)v1865;
	i8 v1867 = v1866+(+672);
	i2 v1868 = *(i2*)(intptr_t)v1867;
	i1 v1869 = v1868;
	f65(v1869);

	i1 v1870 = (i1)+95;
	f59(v1870);

	goto c02_01bd;

c02_01be:;

	if (v1863 != +4) goto c02_01bf;

	i8 v1871 = (i8)(intptr_t)(ws+664);
	i8 v1872 = *(i8*)(intptr_t)v1871;
	i8 v1873 = v1872+(+186);
	i2 v1874 = *(i2*)(intptr_t)v1873;
	f71(v1874);

	goto c02_01bd;

c02_01bf:;

	if (v1863 != +1) goto c02_01c0;

	i2 v1875;
	f93(&v1875);
	i8 v1876 = (i8)(intptr_t)(ws+680);
	*(i2*)(intptr_t)v1876 = v1875;

	i8 v1877 = (i8)(intptr_t)(ws+648);
	i8 v1878 = *(i8*)(intptr_t)v1877;
	i8 v1879 = (i8)(intptr_t)(ws+680);
	i2 v1880 = *(i2*)(intptr_t)v1879;
	i8 v1881;
	f83(&v1881, v1880, v1878);
	i8 v1882 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1882 = v1881;

	i8 v1883 = (i8)(intptr_t)(ws+688);
	i8 v1884 = *(i8*)(intptr_t)v1883;
	i8 v1885;
	f84(&v1885, v1884);
	i8 v1886 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1886 = v1885;

	i8 v1887 = (i8)(intptr_t)(ws+688);
	i8 v1888 = *(i8*)(intptr_t)v1887;
	i8 v1889 = v1888+(+186);
	i2 v1890 = *(i2*)(intptr_t)v1889;
	f71(v1890);

	goto c02_01bd;

c02_01c0:;

	if (v1863 != +2) goto c02_01c1;

	i2 v1891;
	f93(&v1891);
	i8 v1892 = (i8)(intptr_t)(ws+680);
	*(i2*)(intptr_t)v1892 = v1891;

	i1 v1893;
	f92(&v1893);
	i8 v1894 = (i8)(intptr_t)(ws+696);
	*(i1*)(intptr_t)v1894 = v1893;

	i2 v1895;
	f93(&v1895);
	i8 v1896 = (i8)(intptr_t)(ws+698);
	*(i2*)(intptr_t)v1896 = v1895;

	i8 v1897 = (i8)(intptr_t)(ws+648);
	i8 v1898 = *(i8*)(intptr_t)v1897;
	i8 v1899 = (i8)(intptr_t)(ws+680);
	i2 v1900 = *(i2*)(intptr_t)v1899;
	i8 v1901;
	f83(&v1901, v1900, v1898);
	i8 v1902 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1902 = v1901;

	i8 v1903 = (i8)(intptr_t)(ws+688);
	i8 v1904 = *(i8*)(intptr_t)v1903;
	i8 v1905;
	f84(&v1905, v1904);
	i8 v1906 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1906 = v1905;

	i8 v1907 = (i8)(intptr_t)(ws+696);
	i1 v1908 = *(i1*)(intptr_t)v1907;
	i8 v1909 = (i8)(intptr_t)(ws+688);
	i8 v1910 = *(i8*)(intptr_t)v1909;
	i8 v1911 = v1910+(+176);
	i8 v1912 = (i8)(intptr_t)(ws+696);
	i1 v1913 = *(i1*)(intptr_t)v1912;
	i8 v1914 = v1913;
	i1 v1915 = (i1)+1;
	i8 v1916 = ((i8)v1914)<<v1915;
	i8 v1917 = v1911+v1916;
	i2 v1918 = *(i2*)(intptr_t)v1917;
	i8 v1919 = (i8)(intptr_t)(ws+698);
	i2 v1920 = *(i2*)(intptr_t)v1919;
	i2 v1921 = v1918+v1920;
	f72(v1921, v1908);

	goto c02_01bd;

c02_01c1:;

	if (v1863 != +5) goto c02_01c2;

	i2 v1922;
	f93(&v1922);
	i8 v1923 = (i8)(intptr_t)(ws+680);
	*(i2*)(intptr_t)v1923 = v1922;

	i1 v1924;
	f92(&v1924);
	i8 v1925 = (i8)(intptr_t)(ws+696);
	*(i1*)(intptr_t)v1925 = v1924;

	i8 v1926 = (i8)(intptr_t)(ws+648);
	i8 v1927 = *(i8*)(intptr_t)v1926;
	i8 v1928 = (i8)(intptr_t)(ws+680);
	i2 v1929 = *(i2*)(intptr_t)v1928;
	i8 v1930;
	f83(&v1930, v1929, v1927);
	i8 v1931 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1931 = v1930;

	i8 v1932 = (i8)(intptr_t)(ws+688);
	i8 v1933 = *(i8*)(intptr_t)v1932;
	i8 v1934;
	f84(&v1934, v1933);
	i8 v1935 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1935 = v1934;

	i8 v1936 = (i8)(intptr_t)(ws+696);
	i1 v1937 = *(i1*)(intptr_t)v1936;
	i8 v1938 = (i8)(intptr_t)(ws+688);
	i8 v1939 = *(i8*)(intptr_t)v1938;
	i8 v1940 = v1939+(+168);
	i8 v1941 = (i8)(intptr_t)(ws+696);
	i1 v1942 = *(i1*)(intptr_t)v1941;
	i8 v1943 = v1942;
	i1 v1944 = (i1)+1;
	i8 v1945 = ((i8)v1943)<<v1944;
	i8 v1946 = v1940+v1945;
	i2 v1947 = *(i2*)(intptr_t)v1946;
	f72(v1947, v1937);

	goto c02_01bd;

c02_01c2:;

	i8 v1948 = (i8)(intptr_t)(ws+672);
	i1 v1949 = *(i1*)(intptr_t)v1948;
	f59(v1949);

c02_01bd:;


	goto c02_01b9;

c02_01bc:;

endsub:;
}

// WriteSubroutinesToOutputFile workspace at ws+648 length ws+32
void f87(i8 p1811 /* coo */) {
	*(i8*)(intptr_t)(ws+648) = p1811; /*coo */








	i8 v1950 = (i8)(intptr_t)(ws+648);
	i8 v1951 = *(i8*)(intptr_t)v1950;
	i4 v1952 = (i4)+0;
	f46(v1952, v1951);

c02_01c3:;

	i2 v1953 = (i2)+255;
	i8 v1954 = (i8)(intptr_t)(ws+674);
	*(i2*)(intptr_t)v1954 = v1953;

	f90();

	i2 v1955;
	f93(&v1955);
	i8 v1956 = (i8)(intptr_t)(ws+674);
	*(i2*)(intptr_t)v1956 = v1955;

	i8 v1957 = (i8)(intptr_t)(ws+648);
	i8 v1958 = *(i8*)(intptr_t)v1957;
	i4 v1959;
	f47(&v1959, v1958);
	i8 v1960 = (i8)(intptr_t)(ws+674);
	i2 v1961 = *(i2*)(intptr_t)v1960;
	i4 v1962 = v1961;
	i4 v1963 = v1959+v1962;
	i8 v1964 = (i8)(intptr_t)(ws+676);
	*(i4*)(intptr_t)v1964 = v1963;

	i8 v1965 = (i8)(intptr_t)(ws+672);
	i1 v1966 = *(i1*)(intptr_t)v1965;
	i1 v1967 = (i1)+69;
	if (v1966==v1967) goto c02_01c8; else goto c02_01c9;

c02_01c8:;

	goto c02_01c4;

	goto c02_01c5;

c02_01c9:;

	i8 v1968 = (i8)(intptr_t)(ws+672);
	i1 v1969 = *(i1*)(intptr_t)v1968;
	i1 v1970 = (i1)+83;
	if (v1969==v1970) goto c02_01cc; else goto c02_01cd;

c02_01cc:;

	i2 v1971;
	f93(&v1971);
	i8 v1972 = (i8)(intptr_t)(ws+656);
	*(i2*)(intptr_t)v1972 = v1971;

	i8 v1973 = (i8)(intptr_t)(ws+648);
	i8 v1974 = *(i8*)(intptr_t)v1973;
	i8 v1975 = (i8)(intptr_t)(ws+656);
	i2 v1976 = *(i2*)(intptr_t)v1975;
	i8 v1977;
	f83(&v1977, v1976, v1974);
	i8 v1978 = (i8)(intptr_t)(ws+664);
	*(i8*)(intptr_t)v1978 = v1977;

	i8 v1979 = (i8)(intptr_t)(ws+664);
	i8 v1980 = *(i8*)(intptr_t)v1979;
	i8 v1981;
	f84(&v1981, v1980);
	i8 v1982 = (i8)(intptr_t)(ws+664);
	*(i8*)(intptr_t)v1982 = v1981;

	i8 v1983 = (i8)(intptr_t)(ws+664);
	i8 v1984 = *(i8*)(intptr_t)v1983;
	i8 v1985 = v1984+(+188);
	i1 v1986 = *(i1*)(intptr_t)v1985;
	i1 v1987 = v1986&(+1);
	i1 v1988 = (i1)+0;
	if (v1987==v1988) goto c02_01d2; else goto c02_01d1;

c02_01d1:;

	f94();

	goto c02_01ce;

c02_01d2:;

c02_01ce:;

	goto c02_01c5;

c02_01cd:;

c02_01c5:;

	i8 v1989 = (i8)(intptr_t)(ws+648);
	i8 v1990 = *(i8*)(intptr_t)v1989;
	i8 v1991 = (i8)(intptr_t)(ws+676);
	i4 v1992 = *(i4*)(intptr_t)v1991;
	f46(v1992, v1990);

	goto c02_01c3;

c02_01c4:;

endsub:;
}

// WriteAllSubroutinesToOutputFile workspace at ws+640 length ws+8
void f95(i8 p1993 /* coos */) {
	*(i8*)(intptr_t)(ws+640) = p1993; /*coos */

c02_01d5:;

	i8 v1994 = (i8)(intptr_t)(ws+640);
	i8 v1995 = *(i8*)(intptr_t)v1994;
	i8 v1996 = (i8)+0;
	if (v1995==v1996) goto c02_01d8; else goto c02_01d7;

c02_01d7:;

	i8 v1997 = (i8)(intptr_t)(ws+640);
	i8 v1998 = *(i8*)(intptr_t)v1997;
	f87(v1998);

	i8 v1999 = (i8)(intptr_t)(ws+640);
	i8 v2000 = *(i8*)(intptr_t)v1999;
	i8 v2001 = v2000+(+664);
	i8 v2002 = *(i8*)(intptr_t)v2001;
	i8 v2003 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v2003 = v2002;

	goto c02_01d5;

c02_01d8:;

endsub:;
}
const i1 c02_s001e[] = { 0x63,0x6f,0x6e,0x66,0x6c,0x69,0x63,0x74,0x69,0x6e,0x67,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x73,0 };
const i1 c02_s001f[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x27,0 };
const i1 c02_s0020[] = { 0x27,0x20,0x75,0x6e,0x72,0x65,0x73,0x6f,0x6c,0x76,0x65,0x64,0x0a,0 };
const i1 c02_s0021[] = { 0x61,0x62,0x6f,0x72,0x74,0x69,0x6e,0x67,0 };

// ResolveExternals workspace at ws+640 length ws+24
void f96(void) {

	i1 v2004 = (i1)+0;
	i8 v2005 = (i8)(intptr_t)(ws+648);
	*(i1*)(intptr_t)v2005 = v2004;

	i8 v2006 = (i8)(intptr_t)(ws+40);
	i8 v2007 = *(i8*)(intptr_t)v2006;
	i8 v2008 = (i8)(intptr_t)(ws+656);
	*(i8*)(intptr_t)v2008 = v2007;

c02_01db:;

	i8 v2009 = (i8)(intptr_t)(ws+656);
	i8 v2010 = *(i8*)(intptr_t)v2009;
	i8 v2011 = (i8)+0;
	if (v2010==v2011) goto c02_01de; else goto c02_01dd;

c02_01dd:;

	i8 v2012 = (i8)(intptr_t)(ws+656);
	i8 v2013 = *(i8*)(intptr_t)v2012;
	i8 v2014 = v2013+(+188);
	i1 v2015 = *(i1*)(intptr_t)v2014;
	i1 v2016 = v2015&(+2);
	i1 v2017 = (i1)+0;
	if (v2016==v2017) goto c02_01e3; else goto c02_01e2;

c02_01e2:;

	i8 v2018 = (i8)(intptr_t)(ws+656);
	i8 v2019 = *(i8*)(intptr_t)v2018;
	i8 v2020 = v2019+(+160);
	i8 v2021 = *(i8*)(intptr_t)v2020;
	i8 v2022 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v2022 = v2021;

	i8 v2023 = (i8)(intptr_t)(ws+640);
	i8 v2024 = *(i8*)(intptr_t)v2023;
	i8 v2025 = (i8)+0;
	if (v2024==v2025) goto c02_01e8; else goto c02_01e7;

c02_01e7:;

	i8 v2026 = (i8)(intptr_t)(ws+640);
	i8 v2027 = *(i8*)(intptr_t)v2026;
	i8 v2028 = v2027+(+16);
	i8 v2029 = *(i8*)(intptr_t)v2028;
	i8 v2030 = (i8)+0;
	if (v2029==v2030) goto c02_01ef; else goto c02_01f0;

c02_01f0:;

	i8 v2031 = (i8)(intptr_t)(ws+640);
	i8 v2032 = *(i8*)(intptr_t)v2031;
	i8 v2033 = v2032+(+16);
	i8 v2034 = *(i8*)(intptr_t)v2033;
	i8 v2035 = (i8)(intptr_t)(ws+656);
	i8 v2036 = *(i8*)(intptr_t)v2035;
	if (v2034==v2036) goto c02_01ef; else goto c02_01ee;

c02_01ee:;

	i8 v2037 = (i8)(intptr_t)c02_s001e;
	f57(v2037);

	goto c02_01e9;

c02_01ef:;

c02_01e9:;

	i8 v2038 = (i8)(intptr_t)(ws+656);
	i8 v2039 = *(i8*)(intptr_t)v2038;
	i8 v2040 = (i8)(intptr_t)(ws+640);
	i8 v2041 = *(i8*)(intptr_t)v2040;
	i8 v2042 = v2041+(+16);
	*(i8*)(intptr_t)v2042 = v2039;

	goto c02_01e4;

c02_01e8:;

c02_01e4:;

	goto c02_01df;

c02_01e3:;

c02_01df:;

	i8 v2043 = (i8)(intptr_t)(ws+656);
	i8 v2044 = *(i8*)(intptr_t)v2043;
	i8 v2045 = v2044+(+8);
	i8 v2046 = *(i8*)(intptr_t)v2045;
	i8 v2047 = (i8)(intptr_t)(ws+656);
	*(i8*)(intptr_t)v2047 = v2046;

	goto c02_01db;

c02_01de:;

	i8 v2048 = (i8)(intptr_t)(ws+40);
	i8 v2049 = *(i8*)(intptr_t)v2048;
	i8 v2050 = (i8)(intptr_t)(ws+656);
	*(i8*)(intptr_t)v2050 = v2049;

c02_01f3:;

	i8 v2051 = (i8)(intptr_t)(ws+656);
	i8 v2052 = *(i8*)(intptr_t)v2051;
	i8 v2053 = (i8)+0;
	if (v2052==v2053) goto c02_01f6; else goto c02_01f5;

c02_01f5:;

	i8 v2054 = (i8)(intptr_t)(ws+656);
	i8 v2055 = *(i8*)(intptr_t)v2054;
	i8 v2056 = v2055+(+160);
	i8 v2057 = *(i8*)(intptr_t)v2056;
	i8 v2058 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v2058 = v2057;

	i8 v2059 = (i8)(intptr_t)(ws+640);
	i8 v2060 = *(i8*)(intptr_t)v2059;
	i8 v2061 = (i8)+0;
	if (v2060==v2061) goto c02_01fd; else goto c02_01fe;

c02_01fe:;

	i8 v2062 = (i8)(intptr_t)(ws+640);
	i8 v2063 = *(i8*)(intptr_t)v2062;
	i8 v2064 = v2063+(+16);
	i8 v2065 = *(i8*)(intptr_t)v2064;
	i8 v2066 = (i8)+0;
	if (v2065==v2066) goto c02_01fc; else goto c02_01fd;

c02_01fc:;

	i8 v2067 = (i8)(intptr_t)c02_s001f;
	f11(v2067);

	i8 v2068 = (i8)(intptr_t)(ws+640);
	i8 v2069 = *(i8*)(intptr_t)v2068;
	i8 v2070 = v2069+(+8);
	i8 v2071 = *(i8*)(intptr_t)v2070;
	f11(v2071);

	i8 v2072 = (i8)(intptr_t)c02_s0020;
	f11(v2072);

	i1 v2073 = (i1)+1;
	i8 v2074 = (i8)(intptr_t)(ws+648);
	*(i1*)(intptr_t)v2074 = v2073;

	goto c02_01f7;

c02_01fd:;

c02_01f7:;

	i8 v2075 = (i8)(intptr_t)(ws+656);
	i8 v2076 = *(i8*)(intptr_t)v2075;
	i8 v2077 = v2076+(+8);
	i8 v2078 = *(i8*)(intptr_t)v2077;
	i8 v2079 = (i8)(intptr_t)(ws+656);
	*(i8*)(intptr_t)v2079 = v2078;

	goto c02_01f3;

c02_01f6:;

	i8 v2080 = (i8)(intptr_t)(ws+648);
	i1 v2081 = *(i1*)(intptr_t)v2080;
	i1 v2082 = (i1)+0;
	if (v2081==v2082) goto c02_0203; else goto c02_0202;

c02_0202:;

	i8 v2083 = (i8)(intptr_t)c02_s0021;
	f57(v2083);

	goto c02_01ff;

c02_0203:;

c02_01ff:;

endsub:;
}
const i1 c02_s0022[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x64,0x65,0x70,0x65,0x6e,0x64,0x65,0x6e,0x63,0x79,0x20,0x67,0x72,0x61,0x70,0x68,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0x0a,0 };

// push workspace at ws+3096 length ws+10
void f98(i8 p2104 /* subr */) {
	*(i8*)(intptr_t)(ws+3096) = p2104; /*subr */

	i8 v2105 = (i8)(intptr_t)(ws+3048);
	i2 v2106 = *(i2*)(intptr_t)v2105;
	i8 v2107 = (i8)(intptr_t)(ws+3104);
	*(i2*)(intptr_t)v2107 = v2106;

c02_020c:;

	i8 v2108 = (i8)(intptr_t)(ws+3104);
	i2 v2109 = *(i2*)(intptr_t)v2108;
	i2 v2110 = (i2)+0;
	if (v2109==v2110) goto c02_020f; else goto c02_020e;

c02_020e:;

	i8 v2111 = (i8)(intptr_t)(ws+3104);
	i2 v2112 = *(i2*)(intptr_t)v2111;
	i2 v2113 = v2112+(-1);
	i8 v2114 = (i8)(intptr_t)(ws+3104);
	*(i2*)(intptr_t)v2114 = v2113;

	i8 v2115 = (i8)(intptr_t)(ws+648);
	i8 v2116 = (i8)(intptr_t)(ws+3104);
	i2 v2117 = *(i2*)(intptr_t)v2116;
	i8 v2118 = v2117;
	i1 v2119 = (i1)+3;
	i8 v2120 = ((i8)v2118)<<v2119;
	i8 v2121 = v2115+v2120;
	i8 v2122 = *(i8*)(intptr_t)v2121;
	i8 v2123 = (i8)(intptr_t)(ws+3096);
	i8 v2124 = *(i8*)(intptr_t)v2123;
	if (v2122==v2124) goto c02_0213; else goto c02_0214;

c02_0213:;

	goto endsub;

	goto c02_0210;

c02_0214:;

c02_0210:;

	goto c02_020c;

c02_020f:;

	i8 v2125 = (i8)(intptr_t)(ws+3048);
	i2 v2126 = *(i2*)(intptr_t)v2125;
	i2 v2127 = (i2)+300;
	if (v2126==v2127) goto c02_0218; else goto c02_0219;

c02_0218:;

	i8 v2128 = (i8)(intptr_t)c02_s0022;
	f11(v2128);

	f6();

	goto c02_0215;

c02_0219:;

c02_0215:;

	i8 v2129 = (i8)(intptr_t)(ws+3096);
	i8 v2130 = *(i8*)(intptr_t)v2129;
	i8 v2131 = (i8)(intptr_t)(ws+648);
	i8 v2132 = (i8)(intptr_t)(ws+3048);
	i2 v2133 = *(i2*)(intptr_t)v2132;
	i8 v2134 = v2133;
	i1 v2135 = (i1)+3;
	i8 v2136 = ((i8)v2134)<<v2135;
	i8 v2137 = v2131+v2136;
	*(i8*)(intptr_t)v2137 = v2130;

	i8 v2138 = (i8)(intptr_t)(ws+3048);
	i2 v2139 = *(i2*)(intptr_t)v2138;
	i2 v2140 = v2139+(+1);
	i8 v2141 = (i8)(intptr_t)(ws+3048);
	*(i2*)(intptr_t)v2141 = v2140;

endsub:;
}
const i1 c02_s0023[] = { 0x57,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x20,0x73,0x69,0x7a,0x65,0x73,0x3a,0x0a,0 };
const i1 c02_s0024[] = { 0x20,0x20,0x23,0 };
const i1 c02_s0025[] = { 0x3a,0x20,0 };
const i1 c02_s0026[] = { 0x20,0x62,0x79,0x74,0x65,0x73,0x0a,0 };

// PlaceSubroutines workspace at ws+640 length ws+2452
void f97(i8 p2084 /* subroutine */) {
	*(i8*)(intptr_t)(ws+640) = p2084; /*subroutine */

	i2 v2085 = (i2)+0;
	i8 v2086 = (i8)(intptr_t)(ws+3048);
	*(i2*)(intptr_t)v2086 = v2085;

	i1 v2087 = (i1)+0;
	i8 v2088 = (i8)(intptr_t)(ws+3050);
	*(i1*)(intptr_t)v2088 = v2087;

c02_0206:;

	i8 v2089 = (i8)(intptr_t)(ws+3050);
	i1 v2090 = *(i1*)(intptr_t)v2089;
	i1 v2091 = (i1)+4;
	if (v2090==v2091) goto c02_0209; else goto c02_0208;

c02_0208:;

	i2 v2092 = (i2)+0;
	i8 v2093 = (i8)(intptr_t)(ws+576);
	i8 v2094 = (i8)(intptr_t)(ws+3050);
	i1 v2095 = *(i1*)(intptr_t)v2094;
	i8 v2096 = v2095;
	i1 v2097 = (i1)+1;
	i8 v2098 = ((i8)v2096)<<v2097;
	i8 v2099 = v2093+v2098;
	*(i2*)(intptr_t)v2099 = v2092;

	i8 v2100 = (i8)(intptr_t)(ws+3050);
	i1 v2101 = *(i1*)(intptr_t)v2100;
	i1 v2102 = v2101+(+1);
	i8 v2103 = (i8)(intptr_t)(ws+3050);
	*(i1*)(intptr_t)v2103 = v2102;

	goto c02_0206;

c02_0209:;


	i8 v2142 = (i8)(intptr_t)(ws+640);
	i8 v2143 = *(i8*)(intptr_t)v2142;
	f98(v2143);

c02_021c:;

	i8 v2144 = (i8)(intptr_t)(ws+3048);
	i2 v2145 = *(i2*)(intptr_t)v2144;
	i2 v2146 = (i2)+0;
	if (v2145==v2146) goto c02_021f; else goto c02_021e;

c02_021e:;

	i8 v2147 = (i8)(intptr_t)(ws+3048);
	i2 v2148 = *(i2*)(intptr_t)v2147;
	i2 v2149 = v2148+(-1);
	i8 v2150 = (i8)(intptr_t)(ws+3048);
	*(i2*)(intptr_t)v2150 = v2149;

	i8 v2151 = (i8)(intptr_t)(ws+648);
	i8 v2152 = (i8)(intptr_t)(ws+3048);
	i2 v2153 = *(i2*)(intptr_t)v2152;
	i8 v2154 = v2153;
	i1 v2155 = (i1)+3;
	i8 v2156 = ((i8)v2154)<<v2155;
	i8 v2157 = v2151+v2156;
	i8 v2158 = *(i8*)(intptr_t)v2157;
	i8 v2159 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v2159 = v2158;

	i8 v2160 = (i8)(intptr_t)(ws+640);
	i8 v2161 = *(i8*)(intptr_t)v2160;
	i8 v2162 = v2161+(+188);
	i1 v2163 = *(i1*)(intptr_t)v2162;
	i1 v2164 = v2163|(+1);
	i8 v2165 = (i8)(intptr_t)(ws+640);
	i8 v2166 = *(i8*)(intptr_t)v2165;
	i8 v2167 = v2166+(+188);
	*(i1*)(intptr_t)v2167 = v2164;

	i1 v2168 = (i1)+0;
	i8 v2169 = (i8)(intptr_t)(ws+3050);
	*(i1*)(intptr_t)v2169 = v2168;

c02_0222:;

	i8 v2170 = (i8)(intptr_t)(ws+3050);
	i1 v2171 = *(i1*)(intptr_t)v2170;
	i1 v2172 = (i1)+4;
	if (v2171==v2172) goto c02_0225; else goto c02_0224;

c02_0224:;

	i8 v2173 = (i8)(intptr_t)(ws+640);
	i8 v2174 = *(i8*)(intptr_t)v2173;
	i8 v2175 = v2174+(+176);
	i8 v2176 = (i8)(intptr_t)(ws+3050);
	i1 v2177 = *(i1*)(intptr_t)v2176;
	i8 v2178 = v2177;
	i1 v2179 = (i1)+1;
	i8 v2180 = ((i8)v2178)<<v2179;
	i8 v2181 = v2175+v2180;
	i2 v2182 = *(i2*)(intptr_t)v2181;
	i8 v2183 = (i8)(intptr_t)(ws+640);
	i8 v2184 = *(i8*)(intptr_t)v2183;
	i8 v2185 = v2184+(+168);
	i8 v2186 = (i8)(intptr_t)(ws+3050);
	i1 v2187 = *(i1*)(intptr_t)v2186;
	i8 v2188 = v2187;
	i1 v2189 = (i1)+1;
	i8 v2190 = ((i8)v2188)<<v2189;
	i8 v2191 = v2185+v2190;
	i2 v2192 = *(i2*)(intptr_t)v2191;
	i2 v2193 = v2182+v2192;
	i8 v2194 = (i8)(intptr_t)(ws+3060);
	*(i2*)(intptr_t)v2194 = v2193;

	i8 v2195 = (i8)(intptr_t)(ws+3060);
	i2 v2196 = *(i2*)(intptr_t)v2195;
	i1 v2197 = (i1)+8;
	i2 v2198;
	f69(&v2198, v2197, v2196);
	i8 v2199 = (i8)(intptr_t)(ws+3052);
	i8 v2200 = (i8)(intptr_t)(ws+3050);
	i1 v2201 = *(i1*)(intptr_t)v2200;
	i8 v2202 = v2201;
	i1 v2203 = (i1)+1;
	i8 v2204 = ((i8)v2202)<<v2203;
	i8 v2205 = v2199+v2204;
	*(i2*)(intptr_t)v2205 = v2198;

	i8 v2206 = (i8)(intptr_t)(ws+576);
	i8 v2207 = (i8)(intptr_t)(ws+3050);
	i1 v2208 = *(i1*)(intptr_t)v2207;
	i8 v2209 = v2208;
	i1 v2210 = (i1)+1;
	i8 v2211 = ((i8)v2209)<<v2210;
	i8 v2212 = v2206+v2211;
	i2 v2213 = *(i2*)(intptr_t)v2212;
	i8 v2214 = (i8)(intptr_t)(ws+3060);
	i2 v2215 = *(i2*)(intptr_t)v2214;
	if (v2213<v2215) goto c02_0229; else goto c02_022a;

c02_0229:;

	i8 v2216 = (i8)(intptr_t)(ws+3060);
	i2 v2217 = *(i2*)(intptr_t)v2216;
	i8 v2218 = (i8)(intptr_t)(ws+576);
	i8 v2219 = (i8)(intptr_t)(ws+3050);
	i1 v2220 = *(i1*)(intptr_t)v2219;
	i8 v2221 = v2220;
	i1 v2222 = (i1)+1;
	i8 v2223 = ((i8)v2221)<<v2222;
	i8 v2224 = v2218+v2223;
	*(i2*)(intptr_t)v2224 = v2217;

	goto c02_0226;

c02_022a:;

c02_0226:;

	i8 v2225 = (i8)(intptr_t)(ws+3050);
	i1 v2226 = *(i1*)(intptr_t)v2225;
	i1 v2227 = v2226+(+1);
	i8 v2228 = (i8)(intptr_t)(ws+3050);
	*(i1*)(intptr_t)v2228 = v2227;

	goto c02_0222;

c02_0225:;

	i8 v2229 = (i8)(intptr_t)(ws+640);
	i8 v2230 = *(i8*)(intptr_t)v2229;
	i8 v2231 = v2230+(+16);
	i8 v2232 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v2232 = v2231;

c02_022d:;

	i8 v2233 = (i8)(intptr_t)(ws+3064);
	i8 v2234 = *(i8*)(intptr_t)v2233;
	i8 v2235 = (i8)+0;
	if (v2234==v2235) goto c02_0230; else goto c02_022f;

c02_022f:;

	i1 v2236 = (i1)+0;
	i8 v2237 = (i8)(intptr_t)(ws+3072);
	*(i1*)(intptr_t)v2237 = v2236;

c02_0233:;

	i8 v2238 = (i8)(intptr_t)(ws+3072);
	i1 v2239 = *(i1*)(intptr_t)v2238;
	i1 v2240 = (i1)+16;
	if (v2239==v2240) goto c02_0236; else goto c02_0235;

c02_0235:;

	i8 v2241 = (i8)(intptr_t)(ws+3064);
	i8 v2242 = *(i8*)(intptr_t)v2241;
	i8 v2243 = v2242+(+8);
	i8 v2244 = (i8)(intptr_t)(ws+3072);
	i1 v2245 = *(i1*)(intptr_t)v2244;
	i8 v2246 = v2245;
	i1 v2247 = (i1)+3;
	i8 v2248 = ((i8)v2246)<<v2247;
	i8 v2249 = v2243+v2248;
	i8 v2250 = *(i8*)(intptr_t)v2249;
	i8 v2251 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2251 = v2250;

	i8 v2252 = (i8)(intptr_t)(ws+3072);
	i1 v2253 = *(i1*)(intptr_t)v2252;
	i1 v2254 = v2253+(+1);
	i8 v2255 = (i8)(intptr_t)(ws+3072);
	*(i1*)(intptr_t)v2255 = v2254;

	i8 v2256 = (i8)(intptr_t)(ws+3080);
	i8 v2257 = *(i8*)(intptr_t)v2256;
	i8 v2258 = (i8)+0;
	if (v2257==v2258) goto c02_023a; else goto c02_023b;

c02_023a:;

	goto c02_0236;

	goto c02_0237;

c02_023b:;

c02_0237:;

	i8 v2259 = (i8)(intptr_t)(ws+3080);
	i8 v2260 = *(i8*)(intptr_t)v2259;
	i8 v2261;
	f84(&v2261, v2260);
	i8 v2262 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2262 = v2261;

	i1 v2263 = (i1)+0;
	i8 v2264 = (i8)(intptr_t)(ws+3050);
	*(i1*)(intptr_t)v2264 = v2263;

c02_023e:;

	i8 v2265 = (i8)(intptr_t)(ws+3050);
	i1 v2266 = *(i1*)(intptr_t)v2265;
	i1 v2267 = (i1)+4;
	if (v2266==v2267) goto c02_0241; else goto c02_0240;

c02_0240:;

	i8 v2268 = (i8)(intptr_t)(ws+3080);
	i8 v2269 = *(i8*)(intptr_t)v2268;
	i8 v2270 = v2269+(+176);
	i8 v2271 = (i8)(intptr_t)(ws+3050);
	i1 v2272 = *(i1*)(intptr_t)v2271;
	i8 v2273 = v2272;
	i1 v2274 = (i1)+1;
	i8 v2275 = ((i8)v2273)<<v2274;
	i8 v2276 = v2270+v2275;
	i2 v2277 = *(i2*)(intptr_t)v2276;
	i8 v2278 = (i8)(intptr_t)(ws+3088);
	*(i2*)(intptr_t)v2278 = v2277;

	i8 v2279 = (i8)(intptr_t)(ws+3052);
	i8 v2280 = (i8)(intptr_t)(ws+3050);
	i1 v2281 = *(i1*)(intptr_t)v2280;
	i8 v2282 = v2281;
	i1 v2283 = (i1)+1;
	i8 v2284 = ((i8)v2282)<<v2283;
	i8 v2285 = v2279+v2284;
	i2 v2286 = *(i2*)(intptr_t)v2285;
	i8 v2287 = (i8)(intptr_t)(ws+3090);
	*(i2*)(intptr_t)v2287 = v2286;

	i8 v2288 = (i8)(intptr_t)(ws+3088);
	i2 v2289 = *(i2*)(intptr_t)v2288;
	i8 v2290 = (i8)(intptr_t)(ws+3090);
	i2 v2291 = *(i2*)(intptr_t)v2290;
	if (v2289<v2291) goto c02_0245; else goto c02_0246;

c02_0245:;

	i8 v2292 = (i8)(intptr_t)(ws+3090);
	i2 v2293 = *(i2*)(intptr_t)v2292;
	i8 v2294 = (i8)(intptr_t)(ws+3080);
	i8 v2295 = *(i8*)(intptr_t)v2294;
	i8 v2296 = v2295+(+176);
	i8 v2297 = (i8)(intptr_t)(ws+3050);
	i1 v2298 = *(i1*)(intptr_t)v2297;
	i8 v2299 = v2298;
	i1 v2300 = (i1)+1;
	i8 v2301 = ((i8)v2299)<<v2300;
	i8 v2302 = v2296+v2301;
	*(i2*)(intptr_t)v2302 = v2293;

	i8 v2303 = (i8)(intptr_t)(ws+3080);
	i8 v2304 = *(i8*)(intptr_t)v2303;
	f98(v2304);

	goto c02_0242;

c02_0246:;

c02_0242:;

	i8 v2305 = (i8)(intptr_t)(ws+3050);
	i1 v2306 = *(i1*)(intptr_t)v2305;
	i1 v2307 = v2306+(+1);
	i8 v2308 = (i8)(intptr_t)(ws+3050);
	*(i1*)(intptr_t)v2308 = v2307;

	goto c02_023e;

c02_0241:;

	i8 v2309 = (i8)(intptr_t)(ws+3080);
	i8 v2310 = *(i8*)(intptr_t)v2309;
	i8 v2311 = v2310+(+188);
	i1 v2312 = *(i1*)(intptr_t)v2311;
	i1 v2313 = v2312&(+1);
	i1 v2314 = (i1)+0;
	if (v2313==v2314) goto c02_024a; else goto c02_024b;

c02_024a:;

	i8 v2315 = (i8)(intptr_t)(ws+3080);
	i8 v2316 = *(i8*)(intptr_t)v2315;
	f98(v2316);

	i8 v2317 = (i8)(intptr_t)(ws+3080);
	i8 v2318 = *(i8*)(intptr_t)v2317;
	i8 v2319 = v2318+(+188);
	i1 v2320 = *(i1*)(intptr_t)v2319;
	i1 v2321 = v2320|(+1);
	i8 v2322 = (i8)(intptr_t)(ws+3080);
	i8 v2323 = *(i8*)(intptr_t)v2322;
	i8 v2324 = v2323+(+188);
	*(i1*)(intptr_t)v2324 = v2321;

	goto c02_0247;

c02_024b:;

c02_0247:;

	goto c02_0233;

c02_0236:;

	i8 v2325 = (i8)(intptr_t)(ws+3064);
	i8 v2326 = *(i8*)(intptr_t)v2325;
	i8 v2327 = *(i8*)(intptr_t)v2326;
	i8 v2328 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v2328 = v2327;

	goto c02_022d;

c02_0230:;

	goto c02_021c;

c02_021f:;

	i8 v2329 = (i8)(intptr_t)c02_s0023;
	f11(v2329);

	i1 v2330 = (i1)+0;
	i8 v2331 = (i8)(intptr_t)(ws+3050);
	*(i1*)(intptr_t)v2331 = v2330;

c02_024e:;

	i8 v2332 = (i8)(intptr_t)(ws+3050);
	i1 v2333 = *(i1*)(intptr_t)v2332;
	i1 v2334 = (i1)+4;
	if (v2333==v2334) goto c02_0251; else goto c02_0250;

c02_0250:;

	i8 v2335 = (i8)(intptr_t)c02_s0024;
	f11(v2335);

	i8 v2336 = (i8)(intptr_t)(ws+3050);
	i1 v2337 = *(i1*)(intptr_t)v2336;
	f17(v2337);

	i8 v2338 = (i8)(intptr_t)c02_s0025;
	f11(v2338);

	i8 v2339 = (i8)(intptr_t)(ws+576);
	i8 v2340 = (i8)(intptr_t)(ws+3050);
	i1 v2341 = *(i1*)(intptr_t)v2340;
	i8 v2342 = v2341;
	i1 v2343 = (i1)+1;
	i8 v2344 = ((i8)v2342)<<v2343;
	i8 v2345 = v2339+v2344;
	i2 v2346 = *(i2*)(intptr_t)v2345;
	f16(v2346);

	i8 v2347 = (i8)(intptr_t)c02_s0026;
	f11(v2347);

	i8 v2348 = (i8)(intptr_t)(ws+3050);
	i1 v2349 = *(i1*)(intptr_t)v2348;
	i1 v2350 = v2349+(+1);
	i8 v2351 = (i8)(intptr_t)(ws+3050);
	*(i1*)(intptr_t)v2351 = v2350;

	goto c02_024e;

c02_0251:;

endsub:;
}
const i1 c02_s0027[] = { 0x43,0x4f,0x57,0x4c,0x49,0x4e,0x4b,0x3a,0x20,0 };
const i1 c02_s0028[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
const i1 c02_s0029[] = { 0x53,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x0a,0 };

// SyntaxError workspace at ws+640 length ws+0
void f99(void) {

	i8 v2368 = (i8)(intptr_t)c02_s0029;
	f57(v2368);

endsub:;
}
const i1 c02_s002a[] = { 0x41,0x64,0x64,0x69,0x6e,0x67,0x20,0x69,0x6e,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };

// AddInputFile workspace at ws+640 length ws+24
void f100(i8 p2369 /* filename */) {
	*(i8*)(intptr_t)(ws+640) = p2369; /*filename */

	i8 v2370 = (i8)(intptr_t)c02_s002a;
	f11(v2370);

	i8 v2371 = (i8)(intptr_t)(ws+640);
	i8 v2372 = *(i8*)(intptr_t)v2371;
	f11(v2372);

	f12();

	i8 v2373 = (i8)(intptr_t)(ws+640);
	i8 v2374 = *(i8*)(intptr_t)v2373;
	i8 v2375;
	f86(&v2375, v2374);
	i8 v2376 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v2376 = v2375;

	i8 v2377 = (i8)(intptr_t)(ws+600);
	i8 v2378 = *(i8*)(intptr_t)v2377;
	i8 v2379 = (i8)+0;
	if (v2378==v2379) goto c02_0255; else goto c02_0256;

c02_0255:;

	i8 v2380 = (i8)(intptr_t)(ws+648);
	i8 v2381 = *(i8*)(intptr_t)v2380;
	i8 v2382 = (i8)(intptr_t)(ws+600);
	*(i8*)(intptr_t)v2382 = v2381;

	i8 v2383 = (i8)(intptr_t)(ws+648);
	i8 v2384 = *(i8*)(intptr_t)v2383;
	i8 v2385 = (i8)(intptr_t)(ws+592);
	*(i8*)(intptr_t)v2385 = v2384;

	goto c02_0252;

c02_0256:;

	i8 v2386 = (i8)(intptr_t)(ws+648);
	i8 v2387 = *(i8*)(intptr_t)v2386;
	i8 v2388 = (i8)(intptr_t)(ws+592);
	i8 v2389 = *(i8*)(intptr_t)v2388;
	i8 v2390 = v2389+(+664);
	*(i8*)(intptr_t)v2390 = v2387;

	i8 v2391 = (i8)(intptr_t)(ws+648);
	i8 v2392 = *(i8*)(intptr_t)v2391;
	i8 v2393 = (i8)(intptr_t)(ws+592);
	*(i8*)(intptr_t)v2393 = v2392;

c02_0252:;

	i8 v2394 = (i8)(intptr_t)(ws+648);
	i8 v2395 = *(i8*)(intptr_t)v2394;
	i2 v2396 = (i2)+0;
	i8 v2397;
	f82(&v2397, v2396, v2395);
	i8 v2398 = *(i8*)(intptr_t)v2397;
	i8 v2399 = (i8)(intptr_t)(ws+656);
	*(i8*)(intptr_t)v2399 = v2398;

	i8 v2400 = (i8)(intptr_t)(ws+656);
	i8 v2401 = *(i8*)(intptr_t)v2400;
	i8 v2402 = (i8)+0;
	if (v2401==v2402) goto c02_025b; else goto c02_025a;

c02_025a:;

	i8 v2403 = (i8)(intptr_t)(ws+616);
	i8 v2404 = *(i8*)(intptr_t)v2403;
	i8 v2405 = (i8)+0;
	if (v2404==v2405) goto c02_025f; else goto c02_0260;

c02_025f:;

	i8 v2406 = (i8)(intptr_t)(ws+656);
	i8 v2407 = *(i8*)(intptr_t)v2406;
	i8 v2408 = (i8)(intptr_t)(ws+616);
	*(i8*)(intptr_t)v2408 = v2407;

	goto c02_025c;

c02_0260:;

c02_025c:;

	goto c02_0257;

c02_025b:;

c02_0257:;

	i8 v2409 = (i8)(intptr_t)(ws+624);
	i8 v2410 = *(i8*)(intptr_t)v2409;
	i8 v2411 = (i8)+0;
	if (v2410==v2411) goto c02_0265; else goto c02_0264;

c02_0264:;

	i8 v2412 = (i8)(intptr_t)(ws+624);
	i8 v2413 = *(i8*)(intptr_t)v2412;
	i8 v2414 = (i8)(intptr_t)(ws+656);
	i8 v2415 = *(i8*)(intptr_t)v2414;
	f81(v2415, v2413);

	goto c02_0261;

c02_0265:;

c02_0261:;

	i8 v2416 = (i8)(intptr_t)(ws+656);
	i8 v2417 = *(i8*)(intptr_t)v2416;
	i8 v2418 = (i8)(intptr_t)(ws+624);
	*(i8*)(intptr_t)v2418 = v2417;

endsub:;
}
const i1 c02_s002b[] = { 0x2d,0x6f,0 };
const i1 c02_s002c[] = { 0x4e,0x6f,0x20,0x6d,0x61,0x69,0x6e,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x69,0x6e,0x20,0x61,0x6e,0x79,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0 };
const i1 c02_s002d[] = { 0x4e,0x6f,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x6e,0x61,0x6d,0x65,0x20,0x73,0x70,0x65,0x63,0x69,0x66,0x69,0x65,0x64,0 };
const i1 c02_s002e[] = { 0x41,0x6e,0x61,0x6c,0x79,0x73,0x69,0x6e,0x67,0x2e,0x2e,0x2e,0x0a,0 };
const i1 c02_s002f[] = { 0x57,0x72,0x69,0x74,0x69,0x6e,0x67,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x2e,0x2e,0x2e,0x0a,0 };
const i1 c02_s0030[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
const i1 c02_s0031[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };

// __main workspace at ws+0 length ws+640
void f3(void) {

	
*(i8*)(intptr_t)(ws+0) 
= (i8)(intptr_t) __lomem; 


	
*(i8*)(intptr_t)(ws+8) 
= (i8)(intptr_t) __himem; 





























	i8 v486 = (i8)(intptr_t)(ws+0);
	i8 v487 = *(i8*)(intptr_t)v486;
	i8 v488 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v488 = v487;

	i8 v489 = (i8)+0;
	i8 v490 = (i8)(intptr_t)(ws+24);
	i8 v491 = *(i8*)(intptr_t)v490;
	*(i8*)(intptr_t)v491 = v489;

	i8 v492 = (i8)(intptr_t)(ws+8);
	i8 v493 = *(i8*)(intptr_t)v492;
	i8 v494 = (i8)(intptr_t)(ws+0);
	i8 v495 = *(i8*)(intptr_t)v494;
	i8 v496 = v493-v495;
	i8 v497 = (i8)(intptr_t)(ws+24);
	i8 v498 = *(i8*)(intptr_t)v497;
	i8 v499 = v498+(+8);
	*(i8*)(intptr_t)v499 = v496;

























	i8 v1138 = (i8)+0;
	i8 v1139 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1139 = v1138;

	i8 v1140 = (i8)+0;
	i8 v1141 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v1141 = v1140;

	i2 v1142 = (i2)+1;
	i8 v1143 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v1143 = v1142;





















	i1 v1326 = (i1)+1;
	i8 v1327 = (i8)(intptr_t)(ws+584);
	*(i1*)(intptr_t)v1327 = v1326;

	i1 v1328 = (i1)+0;
	i8 v1329 = (i8)(intptr_t)(ws+585);
	*(i1*)(intptr_t)v1329 = v1328;

















	i8 v2352 = (i8)(intptr_t)c02_s0027;
	f11(v2352);

	i8 v2353;
	f36(&v2353);
	i1 v2354 = (i1)+10;
	i8 v2355 = ((i8)v2353)>>v2354;
	i2 v2356 = v2355;
	f16(v2356);

	i8 v2357 = (i8)(intptr_t)c02_s0028;
	f11(v2357);

	i8 v2358 = (i8)+0;
	i8 v2359 = (i8)(intptr_t)(ws+592);
	*(i8*)(intptr_t)v2359 = v2358;

	i8 v2360 = (i8)+0;
	i8 v2361 = (i8)(intptr_t)(ws+600);
	*(i8*)(intptr_t)v2361 = v2360;

	i8 v2362 = (i8)+0;
	i8 v2363 = (i8)(intptr_t)(ws+608);
	*(i8*)(intptr_t)v2363 = v2362;

	i8 v2364 = (i8)+0;
	i8 v2365 = (i8)(intptr_t)(ws+616);
	*(i8*)(intptr_t)v2365 = v2364;

	i8 v2366 = (i8)+0;
	i8 v2367 = (i8)(intptr_t)(ws+624);
	*(i8*)(intptr_t)v2367 = v2366;



	f23();

c02_0266:;

	i8 v2419;
	f24(&v2419);
	i8 v2420 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v2420 = v2419;

	i8 v2421 = (i8)(intptr_t)(ws+632);
	i8 v2422 = *(i8*)(intptr_t)v2421;
	i8 v2423 = (i8)+0;
	if (v2422==v2423) goto c02_026b; else goto c02_026c;

c02_026b:;

	goto c02_0267;

	goto c02_0268;

c02_026c:;

c02_0268:;

	i8 v2424 = (i8)(intptr_t)(ws+632);
	i8 v2425 = *(i8*)(intptr_t)v2424;
	i8 v2426 = (i8)(intptr_t)c02_s002b;
	i1 v2427;
	f27(&v2427, v2426, v2425);
	i1 v2428 = (i1)+0;
	if (v2427==v2428) goto c02_0270; else goto c02_0271;

c02_0270:;

	i8 v2429;
	f24(&v2429);
	i8 v2430 = (i8)(intptr_t)(ws+608);
	*(i8*)(intptr_t)v2430 = v2429;

	goto c02_026d;

c02_0271:;

	i8 v2431 = (i8)(intptr_t)(ws+632);
	i8 v2432 = *(i8*)(intptr_t)v2431;
	i1 v2433 = *(i1*)(intptr_t)v2432;
	i1 v2434 = (i1)+45;
	if (v2433==v2434) goto c02_0274; else goto c02_0275;

c02_0274:;

	f99();

	goto c02_026d;

c02_0275:;

	i8 v2435 = (i8)(intptr_t)(ws+632);
	i8 v2436 = *(i8*)(intptr_t)v2435;
	f100(v2436);

c02_026d:;

	goto c02_0266;

c02_0267:;

	i8 v2437 = (i8)(intptr_t)(ws+616);
	i8 v2438 = *(i8*)(intptr_t)v2437;
	i8 v2439 = (i8)+0;
	if (v2438==v2439) goto c02_0279; else goto c02_027a;

c02_0279:;

	i8 v2440 = (i8)(intptr_t)c02_s002c;
	f57(v2440);

	goto c02_0276;

c02_027a:;

c02_0276:;

	i8 v2441 = (i8)(intptr_t)(ws+608);
	i8 v2442 = *(i8*)(intptr_t)v2441;
	i8 v2443 = (i8)+0;
	if (v2442==v2443) goto c02_027e; else goto c02_027f;

c02_027e:;

	i8 v2444 = (i8)(intptr_t)c02_s002d;
	f57(v2444);

	goto c02_027b;

c02_027f:;

c02_027b:;

	i8 v2445 = (i8)(intptr_t)c02_s002e;
	f11(v2445);

	f96();

	i8 v2446 = (i8)(intptr_t)(ws+616);
	i8 v2447 = *(i8*)(intptr_t)v2446;
	f97(v2447);

	i8 v2448 = (i8)(intptr_t)(ws+608);
	i8 v2449 = *(i8*)(intptr_t)v2448;
	f67(v2449);

	i8 v2450 = (i8)(intptr_t)c02_s002f;
	f11(v2450);

	i8 v2451 = (i8)(intptr_t)(ws+600);
	i8 v2452 = *(i8*)(intptr_t)v2451;
	f73(v2452);

	i8 v2453 = (i8)(intptr_t)(ws+600);
	i8 v2454 = *(i8*)(intptr_t)v2453;
	f95(v2454);

	i8 v2455 = (i8)(intptr_t)(ws+600);
	i8 v2456 = *(i8*)(intptr_t)v2455;
	f74(v2456);

	f68();

	i8 v2457 = (i8)(intptr_t)c02_s0030;
	f11(v2457);

	i8 v2458;
	f36(&v2458);
	i1 v2459 = (i1)+10;
	i8 v2460 = ((i8)v2458)>>v2459;
	i2 v2461 = v2460;
	f16(v2461);

	i8 v2462 = (i8)(intptr_t)c02_s0031;
	f11(v2462);

endsub:;
}
void cmain(void) {
	f3();
}
                                                                                                                                                                                                                                                                                                                                                                     