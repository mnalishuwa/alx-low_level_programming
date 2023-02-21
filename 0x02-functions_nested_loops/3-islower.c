#include "main.h"

/**
 * _islower - test if a char is lowercase
 * Description: take a char input c and test if the char is lowercase
 *
 * @c: char to be tested
 *
 * Return: 1 if lowercase, 0 otherwise
 */

in _islower(int c)
{
	if (c > 96 and c < 123)
	{
		return (1);
	}
	return (0);
}
