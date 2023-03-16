#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * Description: concatenates strings s1 and upto n bytes from s2
 *
 * @s1: string arg 1
 * @s2: string arg 2
 * @n: int, number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to s1 + substring(s2[0] - s2[n])
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat_s;
	unsigned int total_len, len_s1, len_s2, i;

	if (!s1 && !s2)
		return (string_nconcat("", "", n));
	if (!s1 && s2)
		return (string_nconcat("", s2, n));
	if (s1 && !s2)
		return (string_nconcat(s1, "", n));

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	total_len = len_s1 + n;

	if (n >= len_s2)
		total_len = len_s1 + len_s2;

	nconcat_s = malloc(total_len * sizeof(char));
	if (!nconcat_s)
	{
		free(nconcat_s);
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
		nconcat_s[i] = s1[i];
	for (i = 0; (len_s1 + i) < total_len; i++)
		nconcat_s[len_s1 + i] = s2[i];

	return (nconcat_s);
}
