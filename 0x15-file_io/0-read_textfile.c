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
	ssize_t n_char, bytes_written = 0;
	int n_write, _textfile_desc;
	char current_char;

	_textfile_desc = open(filename, O_RDONLY);

	if (!filename || (_textfile_desc < 0))
	{
		close(_textfile_desc);
		return (0);
	}

	do {
		n_char = read(_textfile_desc, &current_char, 1);
		if (n_char < 0)
		{
			close(_textfile_desc);
			return (0);
		}

		n_write = _putchar(current_char);
		if (n_write < 0)
		{
			close(_textfile_desc);
			return (0);
		}
		bytes_written++;
		letters = letters;
	} while (n_char > 0);

	close(_textfile_desc);

	return (bytes_written);
}
