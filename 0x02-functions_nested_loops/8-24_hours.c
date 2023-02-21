#include "main.h"

void jack_bauer(void)
{
	int j, k, l;

	for (j = 0; j < 24; j++)
	{
		for (k = 0; k < 6; k++)
		{
			for (l = 0; l < 10; l++)
			{
				if (j >= 10)
				{
					_putchar('0' + (j / 10));
					_putchar('0' + (j % 10));
				}
				else
				{
					_putchar('0');
					_putchar('0' + j);
				}
				_putchar(':');
				_putchar('0' + k);
				_putchar('0' + l);
				_putchar('\n');
			}
		}
	}
}
