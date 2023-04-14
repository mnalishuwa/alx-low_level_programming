#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/* _putchar - write a single char to stdout */
int _putchar(char c);

/* read_textfile - reads a text file and prints it to stdout */
ssize_t read_textfile(const char *filename, size_t letters);

/* int create_file - function creates a new file */
int create_file(const char *filename, char *text_content);

/* append_text_to_file - appends text to the end of a file */
int append_text_to_file(const char *filename, char *text_content);

#endif
