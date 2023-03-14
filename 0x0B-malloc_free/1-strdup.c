#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * Description: takes a string as an argument and returns
 * a pointer to a copy of the string
 *
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *str_cpy; /* pointer to str copy */
	int len_s = _strlen(str); /* get str length */
	int i;

	/* allocate memory */
	str_cpy = malloc(len_s * sizeof(char));

	/* check if str is NULL of if malloc() failed */
	if (len_s == 0 || str_cpy == NULL)
		return (NULL);

	/* duplicate string into str_copy */
	for (i = 0; i < len_s; i++)
		str_cpy[i] = str[i];

	return (str_cpy);
}

/**
 * _strlen - computes the length of a string
 * Description: take a string pointer n and returns the length of the string
 *
 * @s: string input for which to determine length
 *
 * Return: int, the length of the string
 */

int _strlen(char *s)
{
	/* int to hold length of s */
	int len_s;

	/* loop through each char of s,increment len_s each time */
	for (len_s = 0; s[len_s] != '\0'; len_s++)
		;

	return (len_s);
}
