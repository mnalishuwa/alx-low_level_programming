#include "function_pointers.h"

/**
 * int_index - searches an array for a number
 * Description: takes an int array, the number of elements in the array
 * and a pointer to a comparision function that return 0 if no match
 *
 * @array: pointer to int array
 * @size: int, size of the array
 * @cmp: pointer to comparison function
 *
 * Return: index of match, 0 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* check for NULL pointers to prevent segfaults, account for bad size */
	if (!array || !cmp || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		/* return size if cmp returns not 0 */
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
