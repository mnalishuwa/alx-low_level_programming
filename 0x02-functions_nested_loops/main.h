#include <unistd.h>

/**
 * _putchar - writes the charater c to stdout
 * @c: The character to print
 *
 * Return: 1 (success)
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_alphabet - print lowercase alphabet
 * Description: function takes not input and prints alphabet
 * Return: void
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - print lowercase alphabet
 * Description: takes no input, prints alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void);

/* _islower - check if char input is lower */
int _islower(int c);

/* isalpha - check if char is alphabetic */
int _isalpha(int c);

/* print_sign - check if a number is negative, zero, or positive */
int print_sign(int n);

/* _abs - compute the absolute value of an integer */
int _abs(int);

/* print_last_digit - return the last digit of a base 10 integer */
int print_last_digit(int);

/* jack_bauer - print each minute in a 24-hour day */
void jack_bauer(void);

/* times_table - print the multiplication table for 0 - 9 */
void times_table(void);

/* add - return the sum of 2 integers */
int add(int, int);
