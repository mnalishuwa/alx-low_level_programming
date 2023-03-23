#include "function_pointers.h"

/**
 * array_iterator: applies a function to each element of an array
 * Description: takes a pointer to an int array, an unsigned long
 * indicating the number of elements in the array, and a pointer
 * to a function that takes an integer argument and returns void.
 *
 * @array: pointer to int, first element of the array
 * @size: unsigned int, number of elements in the array
 * @action: pointer to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0; /* decrement size to start from last item in array */
	/* apply action function to each element starting from the last */
	for (; i < size; action(array[i]), i++)
		;
}
