#include <stdio.h>

/**
 * main - program start
 * Description: program sums up all multiples of 3 and 5 below 1024
 * Return: 0 (success)
 */

int main(void)
{
	int i, result;

	result = 0;

	for (i = 0; i < 1024; i = i + 1)
	{
		if (i % 3 == 0 || i % 5 == 0)
			result = result + i;
	}
	printf("%d\n", result);
	return (0);
}
