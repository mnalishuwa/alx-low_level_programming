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
	ssize_t bytes_read, bytes_written;
	int _textfile_desc;
	char *text_buf = malloc(letters * sizeof(char));

	_textfile_desc = open(filename, O_RDONLY); /* Open file, readonly mode */
	if (!filename || (_textfile_desc < 0) || text_buf == NULL)
	{ /* check if file name, check if the file was successfully opened */
		close(_textfile_desc);
		free(text_buf);
		return (0);
	}
	/* read through specified number of chars into text_buf*/
	bytes_read = read(_textfile_desc, text_buf, letters);
	if (bytes_read < 0)
	{ /* close file and return if read unsuccessful */
		close(_textfile_desc);
		free(text_buf);
		return (0);
	}
	/* Write specified number of chars from text_buf to stdout*/
	bytes_written = write(STDOUT_FILENO, text_buf, letters);
	if (bytes_written < 0)
	{ /* close file and return if write unsuccessful */
		close(_textfile_desc);
		free(text_buf);
		return (0);
	}
	close(_textfile_desc); /* close file after read */

	free(text_buf);

	return (bytes_read); /* return number of chars read */
}
