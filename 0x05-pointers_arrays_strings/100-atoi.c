#include "main.h"

/**
 * _atoi - extract and print number from a string
 * Description: receive s, extract first number from s
 *
 * @s: string containing the number
 *
 * Return: int, extracted number
 */

int _atoi(char *s)
{
	int s_num, first_dgt, _negatives;
	int i, j;

	first_dgt = 0;
	_negatives = 0;
	s_num = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == 45)
			_negatives += 1;
		if (*(s + i) > 47 && *(s + i) < 58)
		{
			if (!first_dgt)
			{
				first_dgt = 1;
				for (j = i; *(s + j) != '\0' && (*(s + j) > 47 && *(s + j) < 58); j++)
				{
					s_num = s_num * 10 + (*(s + j) - 48);
				}
				break;
			}
		}
	}

	if (_negatives % 2 == 1)
		s_num = -1 * s_num;
	return (s_num);
}
