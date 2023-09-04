#include "main.h"

/**
 * read_textfile - reads a text from a file and print it
 * @filename: name of the file to read.
 * @letters: numbers of bytes to printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char buffer[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	nrd = read(fd, &buffer[0], letters);
	nwr = write(STDOUT_FILENO, &buffer[0], nrd);
	close(fd);
	return (nwr);
}
