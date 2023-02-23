#include <stdio.h>

/**
 * main - print 1 through 100
 * Description: print 1 - 100, FizzBuzz for mulitples of 3 and 5
 * Fizz for multiples of 3, Buzz for multiples of 5
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
