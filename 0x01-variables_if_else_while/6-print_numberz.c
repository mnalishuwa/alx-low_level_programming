#include <stdio.h>

/**
 * main: program start
 * Description: Print single digit numbers using putchar function
 * Return: 0 (Success)
 */

int main(void)
{
  char numbers[] = "0123456789\n";
  int i;

  for (i = 0; i < 10; i++)
  {
    putchar(numbers[i]);
  }
  return (0);
}
