#include "main.h"

/**
 * _strcpy - copies a string to a destination buffer
 * Description: receives 2 string pointers and copies a string the dest buffer
 *
 * @dest: target buffer/ memory location for the copy
 * @src: source buffer/ memory location for the copy
 *
 * Return: pointer to char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != 0; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';

	return (dest);
}
