#include <stdio.h>

/**
 * main - program start
 * Description: prints out command line argument 0, argv[0]
 *
 * @argc: int total number of command line arguments passed
 * @argv: string array that hold the command line arguments passed
 * in string format.
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
