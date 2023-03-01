#include "main.h"
#define UPER_DST 32
/**
 * leet - encodes a string to 1337
 * Description: encodes a string into leet 1337, where letters a, e, o, t, l
 * both upper and lowercase are replaced by 4, 3, 0, 7, 1 respectively
 *
 * @s: string to be converted to leet code
 *
 * Return: pointer to the converted string s
 */

char *leet(char *s)
{
	char _leet[] = "43071";
	char _key[] = "aeotl";
	int pos, kpos;

	for (pos = 0; *(s + pos) != '\0'; pos++)
	{
		for (kpos = 0; *(_key + kpos) != '\0'; kpos++)
		{
			if (*(s + pos) == *(_key + kpos) || *(s + pos) == *(_key + kpos - UPER_DST))
				*(s + pos) = *(_leet + kpos);
/*			break; */
		}
	}

	return (s);
}
