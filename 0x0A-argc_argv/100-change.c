#include <stdio.h>
#include <stdlib.h>

/**
 * main - Start program
 * Description: program that prints the minimum number of coins to make
 * change for an amount of money
 *
 * @argc: int, total number of arguments
 * @argv: pointer to array of pointers that holds the arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int cents, change, quarters, dimes, nickels, la_two_cents, pennies;

	if ((argc - 1) != 1)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[argc - 1]);

	if (cents <= 0)
	{
		change = 0;
	}
	else
	{
		quarters = cents / 25;
		dimes = (cents % 25) / 10;
		nickels = ((cents % 25) % 10) / 5;
		la_two_cents = (((cents % 25) % 10) % 5) / 2;
		pennies = ((((cents % 25) % 10) % 5) % 2);

		change = quarters + dimes + nickels + la_two_cents + pennies;
	}
	printf("%d\n", change);

	return (0);
}
