#ifndef COMPILER_H
#define COMPILER_H

extern int32_t number;
extern struct symbol* current_type;

extern bool is_ptr(struct symbol* sym);
extern bool is_num(struct symbol* sym);
extern bool is_snum(struct symbol* sym);
extern bool is_array(struct symbol* sym);
extern bool is_array_ptr(struct symbol* sym);
extern bool is_scalar(struct symbol* sym);
extern bool is_record(struct symbol* sym);
extern bool is_record_ptr(struct symbol* sym);

extern struct midnode* expr_add(struct midnode* lhs, struct midnode* rhs);
extern struct midnode* expr_sub(struct midnode* lhs, struct midnode* rhs);
extern struct midnode* expr_simple(struct midnode* lhs, struct midnode* rhs,
		struct midnode* (*emitter)(int width, struct midnode* lhs, struct midnode* rhs));
extern struct midnode* expr_signed(struct midnode* lhs, struct midnode* rhs,
        struct midnode* (*emitteru)(int width, struct midnode* lhs, struct midnode* rhs),
        struct midnode* (*emitters)(int width, struct midnode* lhs, struct midnode* rhs));
extern struct midnode* expr_shift(struct midnode* lhs, struct midnode* rhs,
        struct midnode* (*emitteru)(int width, struct midnode* lhs, struct midnode* rhs),
        struct midnode* (*emitters)(int width, struct midnode* lhs, struct midnode* rhs));
extern Node* cond_simple(struct midnode* lhs, struct midnode* rhs,
        struct midnode* (*emitteru)(int width, struct midnode* lhs, struct midnode* rhs, int truelabel, int falselabel, int fallthrough, int negated),
        struct midnode* (*emitters)(int width, struct midnode* lhs, struct midnode* rhs, int truelabel, int falselabel, int fallthrough, int negated));

extern void init_var(struct symbol* sym, struct symbol* type);
extern void init_member(struct symbol* sym, struct symbol* type);
extern struct symbol* make_pointer_type(struct symbol* type);
extern struct symbol* make_array_type(struct symbol* type, int32_t size);

extern void check_non_partial_type(Symbol* sym);
extern void symbol_redeclaration(Symbol* sym);
extern void check_expression_type(struct symbol** node, struct symbol* type);
extern void unescape(char* string);

struct token
{
    int32_t number;
    char* string;
};

extern struct token* make_string_token(const char* string);
extern struct token* make_number_token(int32_t number);
extern void free_token(struct token* token);

extern Symbol* get_input_parameter(Subroutine* sub, int count);
extern Symbol* get_output_parameter(Subroutine* sub, int count);

extern void* ParseAlloc(void *(*allocator)(size_t size));
extern void ParseTrace(FILE* file, char* prompt);
extern void Parse(void* parser, int token, struct token* minor);

extern Node* mid_c_cast(int width, Node* lhs, bool sext);
extern Node* mid_c_neg(int width, Node* lhs);
extern Node* mid_c_not(int width, Node* lhs);
extern Node* mid_c_or(int width, Node* lhs, Node* rhs);
extern Node* mid_c_add(int width, Node* lhs, Node* rhs);
extern Node* mid_c_sub(int width, Node* lhs, Node* rhs);
extern Node* mid_c_mul(int width, Node* lhs, Node* rhs);
extern Node* mid_c_divu(int width, Node* lhs, Node* rhs);
extern Node* mid_c_divs(int width, Node* lhs, Node* rhs);
extern Node* mid_c_remu(int width, Node* lhs, Node* rhs);
extern Node* mid_c_rems(int width, Node* lhs, Node* rhs);

extern void rewrite_labels(Node* node, int fromlabel, int tolabel);

#endif