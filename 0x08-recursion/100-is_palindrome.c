#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks whether a string is a palindrome
 * Description: receives a string s, computes its length, then passes
 * the string and the length to a helper function which does the work
 * of checking if s reads the serve forwards as it does in reverse.
 *
 * @s: input string
 *
 * Return: 1 if s is a palindrome and 0 otherwise
 */


int is_palindrome(char *s)
{
	int len_s = strlen(s);

	len_s = len_s - 1;
	/* helper method recursively checks whether s is a palindrome */
	return (is_pal_helper(s, 0, len_s));
}

/**
 * is_pal_helper - check if string is palindrome
 * Description: takes string s, ints first_char, last_char, and recursively
 * checks if s is a palindrome by comparing the end chars of s, then repeatedly
 * shaving them of with each successive call until it gets to a base case of a
 * single char string, at which point it returns.
 *
 * @s: input string
 * @frst_c: int, indicating index of the first char in s
 * @lst_c: int, indicating index of last char in s
 *
 * Return: int, 1 if s is a palindrome, 0 otherwise
 */

int is_pal_helper(char *s, int frst_c, int lst_c)
{
	/* check if s is 1 char or less, first and last char are same index */
	if (frst_c >= lst_c)
		return (1);

	/*
	 * compare chars at the ends, then recursively call the function
	 * again with chars innerly adjacent to the end chars as the new
	 * end chars.
	 */
	return ((s[frst_c] == s[lst_c]) && is_pal_helper(s, frst_c + 1, lst_c - 1));
}
