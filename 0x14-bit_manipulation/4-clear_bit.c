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
	unsigned long int bmask;

	if (n == NULL || index > 63)
		return (-1);

	bmask = 1 << index; /* set on index bit */
	bmask = ~bmask; /* create mask with all bits on except index */

	*n = *n & bmask; /* bitwise & value with mask to clear index bit only */
	return (1);
}
