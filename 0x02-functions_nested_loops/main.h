#include <unistd.h>

/**
 * _putchar - writes the charater c to stdout
 * @c: The character to print
 *
 * Return: 1 (success)
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, sizeof(char)));
}
