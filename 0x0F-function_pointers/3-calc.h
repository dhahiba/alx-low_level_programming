#ifndef _HEADRE_
#define _HEADRE_
/**
 * struct op - struct op
 * @op: the operator
 * @f: ...
 */
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_function(char *s))(int, int);
#endif
