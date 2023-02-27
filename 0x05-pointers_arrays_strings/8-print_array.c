#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of numbers
 * Description: takes an int array and prints out the contents
 *
 * @a: an int array
 * @n: number of elements to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int char_index;

	for (char_index = 0; char_index <= n; char_index++)
	{
		if (char_index == n - 1)
		{
			printf("%d\n", *(a + char_index));
			return;
		}
		printf("%d, ", *(a + char_index));
	}
}
