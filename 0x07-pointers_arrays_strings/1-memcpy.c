#include "main.h"

/**
 * _memcpy - copies memory area
 * Description: copies n bytes of memory area src to area dest
 *
 * @dest: destination memory area
 * @src: source memory area
 *
 * @n: int number of bytes to copy from src to dest
 *
 * Return: char pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
