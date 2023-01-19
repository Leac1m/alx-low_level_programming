#ifndef FUCT_ATR
#define FUCT_ATR
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
/**
 * op_add - adds two integers.
 * @a: int1.
 * @b: int2.
 * Return: sum.
 */
int op_add(int a, int b);
/**
 * op_sub - subtracts two integers.
 * @a: int1.
 * @b: int2.
 * Return: result.
 */
int op_sub(int a, int b);
/**
 * op_add - multiplies two integers.
 * @a: int1.
 * @b: int2.
 * Return: result.
 */
int op_mul(int a, int b);
/**
 * op_div - divides integers.
 * @a: divident.
 * @b: divisor.
 * Return: result.
 */
int op_div(int a, int b);
/**
 * op_mod - returns the remainder of the division of a by b.
 * @a: int1.
 * @b: int2.
 * Return: result.
 */
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
