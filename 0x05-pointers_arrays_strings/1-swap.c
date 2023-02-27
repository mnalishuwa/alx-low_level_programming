#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * Description: takes ints a, b and swaps their values using their values
 *
 * @a: first int pointer
 * @b: second int pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
