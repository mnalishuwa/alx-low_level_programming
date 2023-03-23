#include "3-calc.h"

/**
 * get_op_func - selects the correct function based on operator received
 * Description: receives a char representing an operator and returns
 * a pointer to the function associated with the operator
 *
 * @s: str, operator
 *
 * Return:  pointer to function that takes two ints and returns an int
 */

int (*get_op_func(char *s))(int, int)
{
	/* create array of op_t structs that hold op function pointers & op */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;

	/* compare strings passed starting with the last non-null ops */
	/* also check if string is non-null */
	while (s && (i < 5))
	{
		if (!strcmp(s, ops[i].op))
			return (ops[i].f); /* return op function pointer */
		i++;
	}

	return (ops[i].f); /* return null if array processed without a match */
}
