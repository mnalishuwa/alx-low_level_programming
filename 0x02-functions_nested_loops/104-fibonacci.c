#include <stdio.h>
#define FIB1 1
#define FIB2 2
/**
 * main - program start
 * Description: program to prints first 50 fibonacci numbers
 * Return: 0 (success)
 */

int main(void)
{
	unsigned long int fib_arr[98] = {0}; /* initialize fib number array */
	int i;

	/* set 1st and 2nd array element to hold initial fibonacci numbers */
	fib_arr[0] = FIB1;
	fib_arr[1] = FIB2;

	printf("%d, %d, ", FIB1, FIB2);
	/* loop through and generate successive fib numbers */
	for (i = FIB2; i < 99; i++)
	{
		fib_arr[i] = fib_arr[i - 1] + fib_arr[i - 2];
		if (i == 98)
			printf("%lu\n", fib_arr[i]);
		else
			printf("%lu, ", fib_arr[i]);
	}
	return (0);
}
