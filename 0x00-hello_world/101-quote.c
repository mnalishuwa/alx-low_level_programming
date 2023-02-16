#include <unistd.h>

/**
 * main - program entry
 * Description: print to stderr without using printf or put
 * Return: 1 (Error)
 */

int main(void)
{
char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(STDERR_FILENO, msg, sizeof(msg));
return (1);
}
