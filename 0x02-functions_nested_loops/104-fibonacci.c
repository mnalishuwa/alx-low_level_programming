#include <stdio.h>
#include <limits.h>
#define FIB1 1
#define FIB2 2
#define BASE_LMAX LONG_MAX
/**
 * main - program start
 * Description: program to prints first 50 fibonacci numbers
 * Return: 0 (success)
 */

/* Try long base solution and __int128 solutions */
int main(void)
{
	int size = 98;
	long int fib_arr[size] = {0}; /* fib number array in base LMAX */
	long int fib_arr_dec[size * 2] = {0};
	int i, j, slots_per_fib;

	/* set 1st and 2nd array element to hold initial fibonacci numbers */
	fib_arr[0] = FIB1;
	fib_arr[1] = FIB2;

	printf("%d, %d, ", FIB1, FIB2);
	/* loop through and generate successive fib numbers */
	for (i = FIB2; i < 98; i++)
	{
		if (LONG_MAX - fib_arr[i -1] < fib_arr[i - 2)
		{				

		}
		else
		{
				fib_arr[i] = fib_arr[i - 1] + fib_arr[i - 2];
				if (i == 97)
					printf("%lu\n", fib_arr[i]);
				else
					printf("%lu, ", fib_arr[i]);
		}
	}
	return (0);
}
