#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * Description: creates an array of characters and initializes
 * it to the size and character passed as arguments
 *
 * @size: int, size of the array to be created
 * @c: char to be initialized in all array cells
 *
 * Return: pointer to array or NULL pointer if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *_array;

	/* allocate sufficient memory for the desired array */
	_array = malloc(size * sizeof(char));

	/* return null for size 0 and for failure to allocate */
	if (size == 0 || _array == NULL)
	{
		return (NULL);
	}

	/* initialize array to char c */
	for (i = 0; i < size; i++)
		_array[i] = c;
	return (_array);
}
