#include <stdio.h>

/**
 * main: program start
 * Description: Print alphabet in reverse using putchar()
 * Return: 0 (Success)
 */

int main(void)
{
  char base16[] = "0123456789abcdef\n";
  int i;
  
  for (i = 0; i < 17; i++)
  {
    putchar(base16[i]);
  }

  return (0);
}
