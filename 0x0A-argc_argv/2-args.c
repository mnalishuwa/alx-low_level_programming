#include <stdio.h>

/**
 * main - program start
 * Description: program prints all command line arguments available
 * followed by a new line.
 *
 * @argc: int, total number of command line args
 * @argv: pointer to array of pointers holding command line args as strings
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
