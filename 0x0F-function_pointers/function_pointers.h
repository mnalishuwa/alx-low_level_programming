#include <stddef.h>
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* _putchar - print a single char to stdout */
int _putchar(char c);

/* print_name - prints a string to stdout */
void print_name(char *name, void (*f)(char *));

/* array_iterator - applies a function action to every element of an array */
void array_iterator(int *array, size_t size, void (*action)(int));

/* int_index - searches an array for an integer */
int int_index(int *array, int size, int (*cmp)(int));

/* op_add - adds 2 integers */
int op_add(int a, int b);

/* op_sub - subtracts 2 integers */
int op_sub(int a, int b);

/* op_mul - multiplies 2 numbers */
int op_mul(int a, int b);

/* op_div - divides 2 integers */
int op_div(int a, int b);

/* op_mod - finds the remainder of integer division */
int op_mod(int a, int b);

/* get_op_func - selects the correct function to apply on operands */
int (*get_op_func(char *s))(int, int);

#endif
