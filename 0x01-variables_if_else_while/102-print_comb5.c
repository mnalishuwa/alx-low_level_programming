#include <stdio.h>

/**
 * main - program start
 * Description: print combinations of 2 digit numbers below 99
 * Return: 0 (Success)
 */

int main(void)
{
	int i, j, k, l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = i; k < 58; k++)
			{
				for (l = j + 1; l < 58; l++)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					putchar(44);
					putchar(32);
				}
				l = 48;
			}
		}
	}
	return (0);
}
