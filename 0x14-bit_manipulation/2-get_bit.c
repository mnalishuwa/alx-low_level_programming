#include "main.h"

/**
 * get_bit - returns the value of a bit
 * Description: returns the bit value given an index
 *
 * @n: number with desired bits
 * @index: index of the desired bit
 *
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bmask = 0x01;

	if (index > 63)
		return (-1);

	bmask = bmask << index;

	if ((n & bmask) > 0)
		return (1);
	return (0);
}
