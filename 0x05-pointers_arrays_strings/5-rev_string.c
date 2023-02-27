#include "main.h"
#include <stdlib.h>

/**
 * rev_string - reverses a given string
 * Description: takes a string s and reverses it using pointers
 *
 * @s: input string
 *
 * Return: void
 */

void rev_string(char *s)
{
	char *rev_s;
	int len_s, i, j;

	i = 0;

	for (len_s = 0; *(s + len_s) != '\0'; len_s++)
		;
	rev_s = malloc(len_s * sizeof(char));

	for (j = len_s - 1; j >= 0; j--)
	{
		*(rev_s + i) = *(s + j);
		i++;
	}

	for (i = 0; i < len_s; i++)
		*(s + i) = *(rev_s + i);
	free(rev_s);
}
