#include "main.h"

/**
 * times_table - print multiplication table
 * Description: function takes no inputs, prints multiplication table
 * Return: void
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (result >= 10)
			{
				if (j != 0)
					_putchar(32);
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
				if (j != 9)
					_putchar(44);
			}
			else
			{
				if (j != 0)
				{
					_putchar(32);
					_putchar(32);
				}
				_putchar('0' + result);
				if (j != 9)
				{
					_putchar(44);
				}
			}
		}
		_putchar(10);
	}
}
