#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 * Description: takes int n and m and returns the number of
 * bit toggles necessary to go from n to m
 *
 * @n: uint, source number
 * @m: uint, target number
 *
 * Return: uint, number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long m)
{
	unsigned int flips = 0;
	unsigned long int diff = n ^ m;

	while (diff > 0)
	{
		if ((diff - ((diff >> 1) * 2)) > 0)
			flips++;
		diff = diff >> 1;
	}

	return (flips);
}
