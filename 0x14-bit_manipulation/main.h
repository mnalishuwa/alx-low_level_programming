#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdlib.h>

/* _putchar - write a single char to stdout */
int _putchar(char c);

/* binary_to_uint - converts binary to an unsigned int */
unsigned int binary_to_uint(const char *b);

/* isbin_digit - check if char is zero or 1 */
unsigned int isbin_digit(const char *b);

/* _pow_recursion - return x ^ y */
unsigned int _pow_recursion(unsigned int x, unsigned int y);

/* print_binary - prints binary representation or number */
void print_binary(unsigned long int n);

/* get_bit - returns the value of a given bit */
int get_bit(unsigned long int n, unsigned int index);

/* set_bit - sets the value of a bit given an index */
int set_bit(unsigned long int *n, unsigned int index);

/* clear_bit - sets the value of a bit at index to zero */
int clear_bit(unsigned long int *n, unsigned int index);

/* flip_bits - returns the number of bits to flip from n to m */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* get_endianness - check which endian system machine uses */
int get_endianness(void);

#endif
