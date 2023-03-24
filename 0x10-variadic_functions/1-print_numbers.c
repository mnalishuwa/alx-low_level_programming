#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * Description: takes a list of integers and prints them to stdout
 *
 * @separator: separator between the arguments
 * @n: int, number of arguments
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num, i;

	va_list args;

	va_start(args, n);

	for (i = 0, num = 0; i < n; i++)
	{
		num = va_arg(args, int);

		if (!separator)
		{
			printf("%d ", num);
		}
		else
		{
			if (i == n - 1)
				printf("%d", num);
			else
				printf("%d%s", num, separator);
		}
	}
	printf("\n");

	va_end(args);
}
