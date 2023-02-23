#include "main.h"

/**
 * more_numbers - prints numbers to stdout, 10 times
 * Description: takes no input, prints numbers 0 - 14 to stdout, 10 times
 * Return: void
 */

void more_numbers(void)
{
	char more_numbers_[] = "01234567891011121314\n";
	int i;
	int j = 10;

	/* prints numbers 0 through 14 */
	while (j--)
	{
		for (i = 0; more_numbers_[i] != '\0'; i++)
		{
			_putchar(more_numbers_[i]);
		}
	}
}
