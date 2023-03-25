#include "variadic_functions.h"
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
	int i, specifier;
	char *s;
	int count = strlen(format);
	va_list args;

	va_start(args, format);

	i = 0;
	while (format && (i < count))
	{
		specifier = get_specifier(format[i]);
		if (specifier)
		{
			switch (specifier)
			{
			case CHAR:{
				printf("%c", va_arg(args, int));
				break;
			}
			case INT:{
				printf("%d", va_arg(args, int));
				break;
			}
			case FLOAT:{
				printf("%f", va_arg(args, double));
				break;
			}
			case STRING:{
				s = va_arg(args, char *);
				s = (s == NULL) ? "(nil)" : s;
				printf("%s", s);
				break;
			}
			}
		}
		printf("%s", (i == count - 1) ? "" : ", ");
	}
	printf("\n");

	va_end(args);
}

/**
 * get_specifier - translates the format specifier
 * Description: takes a char and checks if it is a valid format specifier
 *
 * @c: char, argument to check if it is a specifier
 *
 * Return: int, int representing a valid specifier or 0
 */
int get_specifier(char c)
{
	int i;
	format_spec spec[] = {
		{'c', CHAR},
		{'i', INT},
		{'f', FLOAT},
		{'s', STRING},
		{0, NON_TYPE}
	};

	i = 0;

	while (spec[i].specifier != 0)
	{
		if (c - spec[i].specifier == 0)
			return (spec[i]._type);
		i++;
	}

	return (spec[i]._type);
}
