#include "main.h"
#include <string.h>

/**
 * _strncat - joins 2 strings together
 * Description: Receives destination and source pointers of a string,
 * and n, which is the max number of bytes from source to join to dest.
 * It concatenates the source onto the destination, it overrides the
 * destination null terminator and adds a new null terminator after
 * joining the source contents
 *
 * @dest: destination pointer
 * @src: source pointer
 * @n: int, max number of bytes from src to join to dest
 *
 * Return: A pointer to the concatenated result
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_dest, src_index;

	len_dest = strlen(dest);

	for (src_index = 0; src_index < n && *(src + src_index) != '\0'; src_index++)
	{
		*(dest + len_dest + src_index) = *(src + src_index);
	}
	*(dest + len_dest + src_index) = '\0';

	return (dest);
}
