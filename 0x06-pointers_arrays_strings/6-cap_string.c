#include "main.h"
#define LOWER_UPPER_DIST 32
/**
 * cap_string - Converts the first letter of everyword to uppercase
 * Description: receives a string s and converts it to title case
 *
 * @s: string input
 *
 * Return: pointer to the processed string
 */

char *cap_string(char *s)
{
	char _separators[] = ",:.!?\"(){}\n\t ";
	int pos, _sep;

	for (pos = 0; s[pos] != '\0'; pos++)
	{
		if (pos == 0)
		{
			if (s[pos] >= 'a' && s[pos] <= 'z')
				s[pos] -= LOWER_UPPER_DIST;
		}
		else
		{
			for (_sep = 0; _separators[_sep] != '\0'; _sep++)
			{
				if (s[pos - 1] == _separators[_sep])
				{
					if (s[pos] >= 'a' && s[pos] <= 'z')
						s[pos] -= LOWER_UPPER_DIST;
					break;
				}
			}
		}
	}

	return (s);
}
