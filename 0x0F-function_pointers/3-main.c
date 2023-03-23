#include "3-calc.h"

/**
 * main - basic integer arithmetic program
 * Description: uses function pointers to create program that
 * applies basic arithmetic operations on 2 integers
 *
 * @argc: int, argument count passed from commandline
 * @argv: pointer to array of pointers to str arguments
 *
 * Return: int, 0 (Success), 98, 99, 100 indicate error
 */

int main(int argc, char **argv)
{
	int result, a, b;

	/* exit & signal error if number of arguments not exactly 3 */
	if (argc - 1 != 3)
	{
		printf("Error\n");
		exit(98);
	}

	/* exit with error signal if operator presented is invalid */
	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}

	/* convert args to ints */
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* exit with error if op is division and denominator is 0 */
	if ((!strcmp(argv[2], "/") || !strcmp(argv[2], "%")) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}


	result = get_op_func(argv[2])(a, b);

	printf("%d\n", result);

	return (0);
}
