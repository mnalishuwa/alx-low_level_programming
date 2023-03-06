#include <stddef.h>
#include "main.h"

/**
 * _strchr - locate a character in a string
 * Description: check for occurrence of char c in s
 *
 * @s: string to be chacked for c
 * @c: char to find in s
 *
 * Return: pointer to occurrence of c in s or null otherwise
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	return (NULL);
}
