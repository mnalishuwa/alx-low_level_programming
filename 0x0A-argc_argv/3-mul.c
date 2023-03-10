#include <stdio.h>
#include <stdlib.h>

/**
 * main - start program
 * Description: prints the result of multiplication of 2 command line
 * arg numbers
 *
 * @argc: int, total number of command line args
 * @argv: point to array of pointers holding command line args
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
