#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * Description: receives source and destination pointers to strings and
 * copies the contents into the destinations.
 *
 * @dest: destination string or char pointer
 * @src: source string pointer
 * @n: int, number of bytes to write
 *
 * Return: A pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_index, len_src;

	len_src = strlen(src);

	for (src_index = 0; src_index < n && *(src + src_index) != '\0'; src_index++)
		*(dest + src_index) = *(src + src_index);

	for (; src_index < n; src_index++)
		*(dest + src_index) = '\0';

	/* *(dest + src_index) = '\0'; */

	return (dest);
}
