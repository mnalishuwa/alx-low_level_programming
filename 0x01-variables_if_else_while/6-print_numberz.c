#include <stdio.h>

/**
 * main - program start
 * Description: Print single digit numbers using putchar function
 * Return: 0 (Success)
 */

int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
}
putchar(10);
return (0);
}
