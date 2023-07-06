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
	int result = 0, i, len_s;

	if (b == NULL)
		return (0);

	len_s = strlen(b);
	for (i = 0; i < len_s; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result += ((b[i] - '0') * (1 << (len_s - i - 1)));
	}
	return (result);
}
