#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * Description: creates an array of (max - min) integers
 * the integers go from min to max (inclusive)
 *
 * @min: int, first number in the array
 * @max: int, last number in the array
 *
 * Return: pointer to an int
 */

int *array_range(int min, int max)
{
	int *_array;
	int i;

	/*  allocate memory for (max - min) ints */
	_array = malloc((1 + max - min) * sizeof(int));

	/* check if the min is less than max or if malloc succeeds */
	if ((min > max) || !_array)
		return (NULL);

	/* loop through and set values from min to max */
	for (i = 0; i <= (max - min); i++)
		_array[i] = min + i;

	return (_array);
}
