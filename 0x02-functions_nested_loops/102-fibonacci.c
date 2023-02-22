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
	long int fib_arr[50] = {0}; /* initialize array to hold fib numbers */
	int i;

	/* set 1st and 2nd array element to hold initial fibonacci numbers */
	fib_arr[0] = FIB1;
	fib_arr[1] = FIB2;

	printf("%d, %d, ", FIB1, FIB2);
	/* loop through and generate successive fib numbers */
	for (i = FIB2; i < 50; i++)
	{
		fib_arr[i] = fib_arr[i - 1] + fib_arr[i - 2];
		if (i == 49)
			printf("%ld\n", fib_arr[i]);
		else
			printf("%ld, ", fib_arr[i]);
	}
	return (0);
}
