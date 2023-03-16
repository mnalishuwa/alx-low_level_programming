#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - start program
 * Description: multiply two numbers from commandline args
 *
 * @argc: int, total commandline args
 * @argv: pointer to array of strings
 *
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	int i;
	/* long int result; */
	char *end;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (argv[1][i] >= 48 && argv[1][i] < 58)
		{
			continue;
		}
		else
		{
			printf("Error\n");
			exit(98);
		}
	}

	for (i = 0; argv[2][i] != '\0'; i++)
	{
		if (argv[2][i] >= 48 && argv[2][i] < 58)
		{
			continue;
		}
		else
		{
			printf("Error\n");
			exit(98);
		}
	}

	printf("%ld\n", strtol(argv[1], &end, 10) * strtol(argv[2], &end, 10));

	return (0);

}
