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

	if (n == NULL || index > 64)
		return (-1);

	bmask = 1 << index;

	if (get_bit(*n, index))
		*n = *n ^ bmask;
	return (1);
}

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
	unsigned long int bmask;

	if (index > 64)
		return (-1);

	bmask = _pow_recursion(2, index);

	if (n & bmask)
		return (1);

	return (0);
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
