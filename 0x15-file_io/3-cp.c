#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"

/**
 * error_file - checks if files can be opened.
 * @file_from: from_file.
 * @file_to: to_file.
 * @argv: argument vector.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);
	if (file_to == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
}

/**
 * main - program.
 * @argc: arguments count.
 * @argv: argument vector.
 * Return: 1 on success 0 on faillure.
 */
int main(int argc, char *argv[])
{
	int file_from = 0, file_to = 0, err_close;
	ssize_t nchars, nwr;
	char buf[READ_BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "%s\n", USAGE), exit(97);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);
	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(file_to, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, file_from), exit(100);
	err_close = close(file_to);
	if (err_close == -1)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, file_from), exit(100);
	return (0);
}
