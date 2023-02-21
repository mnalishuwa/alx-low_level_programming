#include "main.h"

/**
 * main - start program
 * Description: print char array _putchar
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	char putchar_arr[] = "_putchar";

	for (i = 0; putchar_arr[i] != '\0'; i++)
		_putchar(putchar_arr[i]);
	_putchar('\n');

	return (0);
}
