#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

void _chk_close(int fd, int _nclose);

/**
 * main - program copies from source to dest
 * Description: program copies content of one file to a new file
 *
 * @argc: int, argument count
 * @argv: pointer to array of pointers to arguments, argument vector
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	ssize_t n_read, n_write;
	size_t buffer_size = 1024;
	int file_desc_src, file_desc_dest, n_close;
	char _buffer[1024];

	if (argc - 1 != 2)
	{ /* check that the number of arguments is exactly 2, print error if not */
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* open source file in readonly mode */
	file_desc_src = open(argv[1], O_RDONLY);
	if (file_desc_src < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		n_close = close(file_desc_src);
		_chk_close(file_desc_src, n_close);
		exit(98);
	}
	/* open dest file in write only, truncate if exists, create otherwise */
	file_desc_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_desc_dest < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		n_close = close(file_desc_dest);
		_chk_close(file_desc_dest, n_close);
		exit(99);
	}

	do {
		n_read = read(file_desc_src, &_buffer, buffer_size);
		if (n_read < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			n_close = close(file_desc_src);
			_chk_close(file_desc_src, n_close);
			exit(98);
		}

		n_write = write(file_desc_dest, &_buffer, (size_t)n_read);
		if (n_write < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			n_close = close(file_desc_dest);
			_chk_close(file_desc_dest, n_close);
			exit(99);
		}
	} while (n_read > 0);

	return (0);
}

/**
 * _chk_close - attempt to close file
 * Description: close file
 *
 * @fd: int, file descriptor
 * @_nclose: int, close value
 *
 * Return: void
 */
void _chk_close(int fd, int _nclose)
{
	if (_nclose < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
