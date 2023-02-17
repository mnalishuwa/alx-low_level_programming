#include <stdlib.h>
#include <time.h>

/* more headers goes there */
#include <stdio.h>


/**
 * main - program start
 * Description: Print out statements about the last digit of a number
 * Return: 0 (Success)
 */

int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;

/* your code goes there */
last_digit = n % 10;
if (last_digit > 5)
{
  printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
}
else if (last_digit == 0)
{
  printf("Last digit of %d is %d and is 0\n", n, last_digit);
}
else if (last_digit < 6 && last_digit != 0) 
{
  printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);    
}

return (0);
}
