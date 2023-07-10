#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * Description: opens a file and appends text to the end of
 * of the file
 *
 * @filename: string, file to be opened
 * @text_content: string, text to be written to end of the file
 *
 * Return: int, 1 is success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t n_write;
	int _file_desc;
	char w_byte;

	if (filename == NULL || (strlen(filename) == 0))
		return (-1);
	/* open file in write only & append mode */
	_file_desc = open(filename, O_WRONLY | O_APPEND);
	if (_file_desc < 0)
		return (-1); /* return -1 if open fails */

	if (text_content)
	{
		while (*text_content != '\0')
		{ /* loop and write a single char at a time to the file */
			w_byte = *text_content;
			n_write = write(_file_desc, &w_byte, 1);
			if (n_write < 0)
				return (-1);
			text_content++;
		}
	}
	close(_file_desc);

	return (1);
}
