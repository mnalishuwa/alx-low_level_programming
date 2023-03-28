#include "main.h"
#include <math.h>
#define ZERO 48
#define NEGATIVE_SIGN 45
#define LINE_FEED 10

/**
 * print_number - prints a number to stdout
 * Description: receives and int n, and prints it to stdout using _putchar
 *
 * @n: interger to be printed to stdout
 *
 * Return: void
 */

void print_number(int n)
{
	int temp, _digits, _remainder, result;

	temp = n;
	if (n < 0)
		_putchar(NEGATIVE_SIGN);
	/* get the number of digits in the number */
	for (_digits = 0; temp > 0; _digits++)
		temp = temp / 10;
	/* loop per digit */
	for (_digits--; _digits >= 0; _digits--)
	{
		result = pow(10, _digits);
		_remainder = (n % result);
		n = n / pow(10, _digits);

		if (n < 0)
			n = -1 * n;
		_putchar(n + ZERO);
		n = _remainder;
	}
}
