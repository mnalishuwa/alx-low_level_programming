#include "main.h"

/**
 * _isalpha - test if a char is alphabetic (lower or uppercase)
 * Description: take a char input c and test if the char is lowercase
 *
 * @c: char to be tested
 *
 * Return: 1 if lowercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	return (0);
}
