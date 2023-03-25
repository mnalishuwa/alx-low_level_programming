#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

typedef enum {NON_TYPE, CHAR, INT, FLOAT, STRING} types;

/**
 * struct fmt - Struct format
 *
 * @specifier
 * @type
 */
struct fmt_spec
{
	char specifier;
	types _type;
};

typedef struct fmt_spec format_spec;


/* sum_them_all - sums all arguments passed */
int sum_them_all(const unsigned int n, ...);

/* print_numbers - prints numbers followed by a new line */
void print_numbers(const char *separator, const unsigned int n, ...);

/* print_strings - prints strings */
void print_strings(const char *separator, const unsigned int n, ...);

/* print_all - prints anything */
void print_all(const char * const format, ...);

/* get_specifier - return a valid type */
int get_specifier(char c);

#endif
