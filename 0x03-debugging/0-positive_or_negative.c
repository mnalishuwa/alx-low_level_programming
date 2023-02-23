#include "main.h"
#include <stdlib.h>
#include <time.h>

/* more headers goes there */
#include <stdio.h>

/**
 * main - program start
 * Description: print whether a number is positive or negative
 *
 * Return: 0 (Success)
 */

void positive_or_negative(int i)
{
	
	/* your code goes there */
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
