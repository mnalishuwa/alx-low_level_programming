#include <unistd.h>

/* _putchar - writes char to stdout */
int _putchar(char c);

/* _strcat - join two strings */
char *_strcat(char *dest, char *src);

/* _strncat - joins two string using max of n bytes from source */
char *_strncat(char *dest, char *src, int n);

/* _strncpy - copies a string */
char *_strncpy(char *dest, char *src, int n);

/* _strcmp - compares two strings */
int _strcmp(char *s1, char *s2);

/* reverse_array - reverses the contents of an array */
void reverse_array(int *a, int n);

/* string_toupper - changes all lowercase letters of a string to uppercase */
char *string_toupper(char *);

/* cap_string - change string to title case */
char *cap_string(char *);

/* leet - converts a string to leet 1337 */
char *leet(char *);
