#include <stdio.h>

/**
 * main - program start
 * Description: print all possible 3 digit combinations
 * Return: 0 (success)
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			for (k = j + 1; k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55)
				{
					putchar(44);
					putchar(32);
				}
				else
				{
					putchar(10);
				}
			}
		}
	}
	return (0);
}
