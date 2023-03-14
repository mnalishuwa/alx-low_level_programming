#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * Description: receives strings s1, s2 and allocates memory
 * to concatenate s1 and s2, it returns a pointer to the concatenated result
 *
 * @s1: string argument 1
 * @s2: string argument 2
 *
 * Return: pointer to s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
	char *str_cnctd; /* pointer to concatenated result */
	int len_s1;
	int len_s2;
	int total_len; /* length of concatenation */
	int i;

	if (!s1 && !s2)
		return (str_concat("", ""));
	if (!s1 && s2)
		return (str_concat("", s2));
	if (s1 && !s2)
		return (str_concat(s1, ""));

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	total_len = len_s1 + len_s2 + 1;

	/* allocate necessary memory */
	str_cnctd = malloc(total_len * sizeof(char));

	/* check if NULLS where passed as strings of if malloc failed */
	if (total_len == 0 || str_cnctd == NULL)
		return (NULL);

	/* copy s1 into str_cnctd */
	for (i = 0; s1[i] != '\0'; i++)
		str_cnctd[i] = s1[i];

	/* copy s2 into str_cnctd */
	for (i = 0; s2[i] != '\0'; i++)
		str_cnctd[len_s1 + i] = s2[i]; /* copy s2 chars from s1 end */
	str_cnctd[total_len] = '\0';

	return (str_cnctd);
}
