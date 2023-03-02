#include "main.h"
#define ROT 13
#define ALPHA_LEN 26

/**
 * rot13 - implements a rot13 caesar cypher
 * Description: takes a string s and encodes it using a rot13 caeser cypher
 *
 * @s: string to be encoded
 *
 * Return: s, the string encoded using rot13
 */

char *rot13(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = 'a' + ((s[i] - 'a' + ROT) % ALPHA_LEN);
		}
		for (j = 0; j < 1  && (s[i] >= 'A' && s[i] <= 'Z'); j++)
		{
			s[i] = 'A' + ((s[i] - 'A' + ROT) % ALPHA_LEN);
		}
	}

	return (s);
}
