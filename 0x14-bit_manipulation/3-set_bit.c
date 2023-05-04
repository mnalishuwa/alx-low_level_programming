#include "main.h"

/**
 * set_bit - sets a given bit
 * Description: set a bit
 *
 * @n: pointer to int
 * @index: int, bit to set
 *
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bmask;

	if (n == NULL || index > 63)
		return (-1);

	bmask  = (1 << index); 	/* create a mask setting on index bit */

	/* bitwise OR mask with the number, this will set value to 1 at index */
	*n = *n | bmask;
	return (1);
}
