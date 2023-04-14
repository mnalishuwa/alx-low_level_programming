#include "main.h"

/**
 * create_file - create and truncate a file
 * Description: creates a file with read write file permissions
 * for the owner
 *
 * @filename: string, filename
 * @text_content: string, data to write to file
 *
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int n_write, _file_desc;
	char w_byte;

	if (filename == NULL || strlen(filename) == 0)
		return (-1);
	/* truncate file if not empty, create if it doesnt exist */
	/* set permission using octal, 6 for usr -> 0b110 -> -rw- */
	_file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (_file_desc < 0)
		return (-1);

	if (text_content)
	{
		while (*text_content != '\0')
		{
			w_byte = *text_content;
			n_write = write(_file_desc, &w_byte, 1);
			if (n_write < 0)
				return (-1);
			text_content = text_content + 1;
		}
	}

	close(_file_desc);

	return (1);
}
