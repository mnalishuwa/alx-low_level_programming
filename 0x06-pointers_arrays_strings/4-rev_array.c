#include "main.h"
#include <string.h>

/**
* reverse_array - reverses the contents of an array
* Description: takes an int array a or size n, and reverses the items
*
* @a: int array
* @n: int, size or number of elements in array
*
* Return: void, it modifies the array in place
*/

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
