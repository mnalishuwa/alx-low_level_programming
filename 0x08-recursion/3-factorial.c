#include "main.h"

/**
 * factorial - return the factorial of n
 * Description: takes int n and return n!
 *
 * @n: int
 *
 * Return: int n!
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (n * factorial(n - 1));
}
