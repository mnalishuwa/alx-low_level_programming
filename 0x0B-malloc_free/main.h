#ifndef MAIN_H
#define MAIN_H

/* _putchar - print a single char to stdout */
int _putchar(char c);

/* create_array - creates an array of chars */
char *create_array(unsigned int size, char c);

/* _strdup - returns pointer to a copy of a string passed */
char *_strdup(char *str);

/* str_concat - returns pointer to concatenated copy of strings passed */
char *str_concat(char *s1, char *s2);

/* alloc_grid - returns pointer to a 2 dimensional array of integers */
int **alloc_grid(int width, int height);

/* free_greed - frees a 2 dimensional grid created by alloc_grid */
void free_grid(int **grid, int height);

/* _strlen - returns the length of a string */
int _strlen(char *s);

/* argstostr - concatenates all commandline args passed */
char *argstostr(int ac, char **av);

#endif
