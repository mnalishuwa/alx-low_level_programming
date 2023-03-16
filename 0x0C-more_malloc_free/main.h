#ifndef MAIN_H
#define MAIN_H

/* _putchar - prints a single char to stdout */
int _putchar(char c);

/* malloc_checked - allocates memory using malloc */
void *malloc_checked(unsigned int b);

/* string_nconcat - concateneates 2 strings */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* _calloc - allocates memory for an array using malloc */
void *_calloc(unsigned int nmemb, unsigned int size);

/* array_range - creates an array of integers */
int *array_range(int min, int max);

/* reallocates a memory block using malloc and free */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
