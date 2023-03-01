#include "main.h"
#define LOWER_UPPER_DISTANCE 32

/**
 * string_toupper - changes the case of a string to uppercase
 * Description: takes s and returns the lower s with all lowercase
 * characters converted to uppercase, it uses the ascii values of
 * the characters
 *
 * @s: string to be converted to uppercase
 *
 * Return: a pointer to s
 */

char *string_toupper(char *s)
{
	int char_pos;

	for (char_pos = 0; *(s + char_pos) != '\0'; char_pos++)
	{
		if (*(s + char_pos) >= 'a' && *(s + char_pos) <= 'z')
			*(s + char_pos) -= LOWER_UPPER_DISTANCE;
	}

	return (s);
}
