#include "main.h"

/**
 * clear_bit - clear bit at index
 * Description: clear bit at specified index
 *
 * @n: pointer to int
 * @index: int, bit position
 *
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bmask = 1 << index;

	if (n == NULL)
		return (-1);

	if (bmask <= *n)
		*n = *n ^ bmask;
	return (1);
}
