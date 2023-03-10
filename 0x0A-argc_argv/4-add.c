#include <stdio.h>
#include <stdlib.h>

/**
 * main - start program
 * Description: prints the result of addition of all command line
 * arg numbers
 *
 * @argc: int, total number of command line args
 * @argv: point to array of pointers holding command line args
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	long int _total, value;
	char *end;
	int i;

	_total = 0;

	for (i = 1; i < argc; i++)
	{
		value = strtol(argv[i], &end, 10);
		if (*end != '\0')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			_total += value;
		}
	}

	printf("%ld\n", _total);
	return (0);
}
