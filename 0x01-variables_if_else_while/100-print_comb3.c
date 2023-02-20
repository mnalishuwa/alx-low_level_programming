#include <stdio.h>
/**
 * main - program start
 * Description: print all combinations of double digit numbers
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int k;

	for (i = 48; i < 58; i++)
	{
		for (k = i + 1; k < 58; k++)
		{
			putchar(i);
			putchar(k);
			if (i != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	return (0);
}
