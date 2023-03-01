#include "main.h"

/**
 * _strcat - joins 2 strings together
 * Description: Receives a destination and source pointer of a string
 * and concatenates the source onto the destination, it overrides the
 * destination null terminator and add a new null terminator after
 * adding the source contents
 *
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: A pointer to the concatenated result
 */

char *_strcat(char *dest, char *src)
{
	int len_dest, len_src;

	for (len_dest = 0; *(dest + len_dest) != '\0'; len_dest++)
		;
	for (len_src = 0; *(src + len_src) != '\0'; len_src++)
	{
		*(dest + len_dest) = *(src + len_src);
		len_dest++;
	}
	*(dest + len_dest) = '\0';

	return (dest);
}
