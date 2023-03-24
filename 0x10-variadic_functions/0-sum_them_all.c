#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguments passed
 * Description: takes an unamed argument list of integers and returns the sum
 *
 * @n: int, expected number of args
 *
 * Return: int, (args[0] + args[1] + ... + args[n-1])
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int result, i;

	va_list args;

	if (n == 0)
		return (0);

	result = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		result += va_arg(args, int);

	va_end(args);

	return (result);
}
