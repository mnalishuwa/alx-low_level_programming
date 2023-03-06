#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * Description: checks for substring in s, which only contains
 * The only bytes from accept.
 *
 * @s: string to be checked for substring
 * @accept: substring to search for in s
 *
 * Return: number of bytes in s which consist of all bytes in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len_s, len_a, sub_len, i, in_a;

	sub_len = 0;
	for (len_a = 0; *(accept + len_a) != '\0'; len_a++)
		;

	for (len_s = 0; *(s + len_s) != '\0'; in_a = 0, len_s++)
	{
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*(s + len_s) == *(accept + i))
			{
				in_a = 1;
				break;
			}
		}
		if (in_a == 1)
		{
			sub_len++;
			continue;
		}
		if (in_a == 0 && sub_len < len_a)
			return (0);
		if (in_a == 0 && sub_len >= len_a)
			return (sub_len);
	}

	return (sub_len);
}
