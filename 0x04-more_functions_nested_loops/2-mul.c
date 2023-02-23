#include "main.h"

/**
 * mul - returns the product of two ints
 * Description: takes int a, b and returns a x b
 *
 * @a: first integer argument
 * @b: second integer argument
 *
 * Return: a x b
 */

int mul(int a, int b)
{
	int product, abs_a, abs_b;

	abs_a = a;
	abs_b = b;
	if (a < 0)
		abs_a = -a;
	if (b < 0)
		abs_b = -b;

	for (product = 0; abs_a > 0; abs_a--)
		product += abs_b;

	if ((a < 0) ^ (b < 0))
	{
		return (-product);
	}
	return (product);
}
