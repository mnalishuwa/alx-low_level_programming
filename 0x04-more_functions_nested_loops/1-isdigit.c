#include "main.h"

/**
 * _isdigit - checks if a given int c is a digit
 * Description: takes in int c and checks if c is a digit 0 through 9
 *
 * @c: int to be checker
 *
 * Return: 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
