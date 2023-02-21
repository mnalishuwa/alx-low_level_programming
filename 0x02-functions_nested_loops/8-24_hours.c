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
					putchar('0' + (j / 10));
					putchar('0' + (j % 10));
				}
				else
				{
					putchar('0');
					putchar('0' + j);
				}
				putchar(':');
				putchar('0' + k);
				putchar('0' + l);
				putchar('\n');
			}
		}
	}
}
