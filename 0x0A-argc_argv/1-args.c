#include <stdio.h>

/**
 * main - start program
 * Description: prints the number of command line arguments followed by
 * a new line.
 *
 * @argc: int, number of command line arguments passed
 * @argv: pointer to an array of pointers holding the command line arguments
 * passed as strings.
 *
 * Return: 0 (Success)
 */

int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", (argc - 1));

	return (0);
}
