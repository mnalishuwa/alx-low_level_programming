/* _putchar - takes an int then prints char to stdout */
int _putchar(char c);
/* memset - fills memory with a constant byte */
char *_memset(char *s, char b, unsigned int n);
/* _memcpy - copies memory area */
char *_memcpy(char *dest, char *src, unsigned int n);
/* _strchr - locates a characters in a string */
char *_strchr(char *s, char c);
/* _strspn - gets the length of a prefix substring */
unsigned int _strspn(char *s, char *accept);
/* _strpbrk - searches a string for a subset of bytes */
char *_strpbrk(char *s, char * accept);
/* _strstr - locates a substring */
char *_strstr(char *haystack, char *needle);
/* print_chessboard - prints a chessboard */
void print_chessboard(char (*a)[8]);
/* print_diagsums - prints sum of two diagonals of a square matrix of ints */
void print_diagsums(int *a, int size);
/* set_string - set the value of a pointer to a char */
void set_string(char **s, char *to);
