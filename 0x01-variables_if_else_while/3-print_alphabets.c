#include <stdio.h>

/**
 * main - program start
 * Description: Print alphabet using putchar()
 * Return: 0 (Success)
 */

int main (void)
{
        char alphabet[] =
            "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
        int i;

        for (i = 0; alphabet[i] != '\0'; i++)
                putchar(alphabet[i]);


        return (0);
}
