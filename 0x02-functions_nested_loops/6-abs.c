#include "main.h"

/**
 * _abs - function to compute the absolute value of an integer
 * Description: takes int n and computes the absolute value of n
 *
 * @n: int to compute absolute value for
 *
 * Return: int abs(n)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	return (n);
}
