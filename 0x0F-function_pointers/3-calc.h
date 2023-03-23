#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
struct op
{
	char *op;
	int (*f)(int a, int b);
};

/* define type for struct op */
typedef struct op op_t;

/* op_add - adds 2 integers */
int op_add(int a, int b);

/* op_sub - subtracts 2 integers */
int op_sub(int a, int b);

/* op_mul - multiplies 2 numbers */
int op_mul(int a, int b);

/* op_div - divides 2 integers */
int op_div(int a, int b);

/* op_mod - finds the remainder of integer division */
int op_mod(int a, int b);

/* get_op_func - selects the correct function to apply on operands */
int (*get_op_func(char *s))(int, int);

#endif
