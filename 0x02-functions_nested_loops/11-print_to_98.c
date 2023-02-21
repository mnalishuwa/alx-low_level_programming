#include <stdio.h>

/**
 * print_to_98 - print integers from n to 98
 * Description: takes int n as input then prints numbers from n to 98 incl
 *
 * @n: initial integer
 *
 * Return: void
 */

void print_to_98(int n)
{
	int counter;

	if (n <= 98)
		counter = 1;
	else
		counter = -1;

	for (; n != 98; n = n + counter)
		printf("%d, ", n);
	printf("%d\n", 98);
}
