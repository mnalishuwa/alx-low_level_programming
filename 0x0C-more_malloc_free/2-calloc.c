#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * Description: allocates memory for an array of nmemb elements of size
 * bytes each
 *
 * @nmemb: int, number of elements in the array
 * @size: int, size of each element in the array
 *
 * Return: void pointer to array of nmemb size bytes pointers
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	unsigned char *p;

	/* allocate memory */
	ptr = malloc(nmemb * size);

	/* check if allocation suceeded or if total elements or size is 0*/
	if (nmemb == 0 || size == 0 || !ptr)
		return (NULL);

	p = ptr;

	/* loop through and zero memory */
	for (i = 0; i < (nmemb * size); i++)
		p[i] = (unsigned char)0;

	return (ptr);
}
