#include "variadic_functions.h"

/**
 * print_strings - prints strings to stdout
 * Description: takes a list of strings and prints them to stdout
 *
 * @separator: separator between the arguments
 * @n: int, number of arguments
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (!s)
			s = "(nil)";

		if (!separator)
		{
			printf("%s ", s);
		}
		else
		{
			if (i == n - 1)
				printf("%s", s);
			else
				printf("%s%s", s, separator);
		}
	}
	printf("\n");

	va_end(args);
}
