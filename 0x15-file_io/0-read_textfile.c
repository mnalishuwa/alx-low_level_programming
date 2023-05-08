#include "main.h"

/**
 * read_textfile - reads a text file and prints contents to stdout
 * Description: Receives a text file and writes the contexts to
 * standard output using the stdout file descriptor, STDOUT_FILENO
 *
 * @filename: string, name of the text file
 * @letters: number of chars
 *
 * Return: size_t, number of bytes written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_char, n_write;
	int _textfile_desc;
	char *current_char = malloc(letters * sizeof(char));

	_textfile_desc = open(filename, O_RDONLY); /* Open file, readonly mode */
	if (!filename || (_textfile_desc < 0))
	{ /* check if file name, check if the file was successfully opened */
		close(_textfile_desc);
		return (0);
	}

	/* read through file 1 character at a time */
	n_char = read(_textfile_desc, current_char, letters);
	if (n_char < 0)
	{ /* close file and return if read unsuccessful */
		close(_textfile_desc);
		return (0);
	}
	/* Write the char read to stdout */
	n_write = write(STDOUT_FILENO, current_char, letters);
	if (n_write < 0)
	{ /* close file and return if write unsuccessful */
		close(_textfile_desc);
		return (0);
	}

	close(_textfile_desc); /* close file after read */

	free(current_char);

	return (n_write); /* return number of chars read */
}
