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
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 5;

	while (s && (i - 1 > 0))
	{
		if (!strcmp(s, ops[i - 1].op))
			return (ops[i - 1].f);
		i--;
	}

	return (ops[i].f);
}
