#include <stdio.h>

/**
 * main - program start
 * Description: Print alphabet less 'q' and 'e' using putchar
 * Return: 0 (Success)
 */

int main(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
int i;

for (i = 0; alphabet[i] != '\0'; i++)
{
if (i != 4 && i != 16)
putchar(alphabet[i]);
}
return (0);
}
