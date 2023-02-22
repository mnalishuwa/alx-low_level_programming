#include <stdio.h>
#define FIB1 1
#define FIB2 2
#define FIB_LIMIT 4000000
/**
 * main - program start
 * Description: program to prints sum of even fibonacci numbers below 4000000
 * Return: 0 (success)
 */

int main(void)
{
	long int fib_arr[50] = {0}; /* initialize array to hold fib numbers */
	long int even_fib_sum = FIB2;
	int i;

	/* set 1st and 2nd array element to hold initial fibonacci numbers */
	fib_arr[0] = FIB1;
	fib_arr[1] = FIB2;

	/* loop through and generate successive fib numbers */
	for (i = FIB2; fib_arr[i - 1] < FIB_LIMIT; i++)
	{
		fib_arr[i] = fib_arr[i - 1] + fib_arr[i - 2];
		if (fib_arr[i] % 2 == 0 && fib_arr[i] <= FIB_LIMIT)
			even_fib_sum = even_fib_sum + fib_arr[i];
	}
	printf("%ld\n", even_fib_sum);
	return (0);
}
