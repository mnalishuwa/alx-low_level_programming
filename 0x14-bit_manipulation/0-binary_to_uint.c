#include "main.h"

/**
 * binary_to_uint - coverts a binary number to an unsigned int
 * Description: receives pointer to a string representation of binary
 * digit and converts it to an unsigned int
 *
 * @b: string to be converted
 *
 * Return: unsigned int, converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int pos, len_b, result = 0;

	if (b == NULL || strlen(b) == 0)
		return (0);

	len_b = strlen(b) - 1;

	for (pos = 0; b[pos] != '\0'; pos++)
	{
		if (b[pos] != '1' && b[pos] != '0')
			return (0);
		result += ((b[pos] - 48) * _pow_recursion(2, len_b - pos));
	}

	return (result);
}

/**
 * _pow_recursion - return x ^ y
 * Description: computes x ^ y recursively
 *
 * @x: int arg 1
 * @y: int arg 2
 *
 * Return: int x ^ y
 */
unsigned int _pow_recursion(unsigned int x, unsigned int y)
{
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
