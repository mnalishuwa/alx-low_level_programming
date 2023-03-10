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
/* _strcat - join two strings */
char *_strcat(char *dest, char *src);

/* _strncat - joins two string using max of n bytes from source */
char *_strncat(char *dest, char *src, int n);

/* _strncpy - copies a string */
char *_strncpy(char *dest, char *src, int n);

/* _strcmp - compares two strings */
int _strcmp(char *s1, char *s2);

/* _strlen - returns the length of a string */
int _strlen(char *s);

/* _puts - prints a string to stdout */
void _puts(char *str);

/* *_strcpy - on string to a memory location */
char *_strcpy(char *dest, char *src);

/* _atoi - extract and print first number found in a string */
int _atoi(char *s);

/* _islower - check if char input is lower */
int _islower(int c);

/* isalpha - check if char is alphabetic */
int _isalpha(int c);

/* _abs - compute the absolute value of an integer */
int _abs(int n);

/* _isupper - takes char c and checks if c is uppercase */
int _isupper(int c);

/* _isdigit - takes char c and checks if c is digit 0 through 9 */
int _isdigit(int c);
