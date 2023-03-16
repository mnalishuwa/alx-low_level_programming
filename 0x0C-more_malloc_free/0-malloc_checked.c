#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * Description: receive an int b and allocates memory equal to b bytes
 * using malloc
 *
 * @b: int, positive number of bytes to allocate
 *
 * Return: void pointer to the memory allocated
 */

void *malloc_checked(unsigned int b);
{
	void *ptr;

	/* allocate memory of b bytes and */
	ptr = malloc(b);

	/* check if malloc was successful */
	if (!ptr)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
