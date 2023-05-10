#ifndef MAIN_H
#define MAIN_H

#include <elf.h>
#include <fcntl.h>
#include <stdlib.h>
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

/* print_magic - prints the magic number */
void print_magic(void *ebuf);

/* checks if ELF is valid based on the 1st 4 bytes of header */
int is_elf(void *ebuf);

void elf_endian(unsigned char *ebuf);

void print_version(unsigned char *ebuf);

void elf_class(unsigned char *ebuf);

void print_abi_version(unsigned char *ebuf);

char *check_osabi(unsigned char *ebuf);

char *check_type(unsigned char *ebuf);

void print_entry(char *fname, unsigned char *ebuf);

#endif
