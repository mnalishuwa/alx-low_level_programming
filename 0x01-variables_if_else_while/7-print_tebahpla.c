#include <stdio.h>

/**
 * main: program start
 * Description: Print alphabet in reverse using putchar()
 * Return: 0 (Success)
 */

int main(void)
{
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
  int i;
  
  for (i = 25; i >= 0; i--)
  {
    putchar(alphabet[i]);
  }

  return (0);
}
