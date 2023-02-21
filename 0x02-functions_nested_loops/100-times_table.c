#include <stdio.h>

/**
 * print_times_table - print n by n multiplication table
 * Description: function takes an int n, prints multiplication table n by n
 *
 * @n: int representing size of multiplication table to be printed
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, result;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j == 0)
				printf("%d,", result);
			else if (j == n)
				printf("%4d\n", result);
			else
				printf("%4d," result);
		}
	}
}
