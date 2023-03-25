#include "function_pointers.h"
#include <string.h>

/**
 * print_all - function prints anything
 * Description: function takes a format str which specifies the type
 * of the argument to be printed
 *
 * @format: pointer to a list of types of arguments passed
 */

void print_all(const char * const format, ...)
{
	int i;
	char c;
	int count = strlen(format);

	va_list(args, count);

	i = 0;
	while (format && (i < count))
	{
		specifier = get_specifier(format[i]);
		if (specifier)
		{
			switch (specifier)
			{
			case "%c":{
				printf(specifier, va_arg(args, char));
				break;
			}
			case "%i":{
				printf(specifier, va_arg(args, int));
				break;
			}
			case "%f":{
				printf(specifier, va_arg(args, float));
				break;
			}
			case "%s":{
				s = va_arg(args, char *);
				s = (s == NULL) ? "(nil)" : s;
				printf(specifier, va_arg(args, char *));
				break;
			}
			}
		}
		printf("%s", (i == count - 1) ? "" : ", ");
	}
	printf("\n");
}

/**
 * get_specifier - translates the format specifier
 * Description: takes a char and checks if it is a valid format specifier
 *
 * @c: char, argument to check if it is a specifier
 *
 * Return: str, str representing a valid specifier or NULL
 */
char *get_specifier(char c)
{
	int i;
	format_spec spec[] = {
		{'c', "%c"},
		{'i', "%d"},
		{'f', "%f"},
		{'s', "%s"},
		{NULL, NULL}
	};

	int i = 0;

	while (c && (i < 5))
	{
		if (c - spec[i].specifier == 0)
			return (spec[i]._type);
		i++;
	}

	return (spec[i]._type);
}
