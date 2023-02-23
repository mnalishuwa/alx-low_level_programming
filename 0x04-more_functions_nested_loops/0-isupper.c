#include "main.h"

/**
 * _isupper - checks whether a given char is uppercase
 * Description: function takes char and checks if char is uppercase
 *
 * @c: char to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
