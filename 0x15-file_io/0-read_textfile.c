#include "holberton.h"
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - function that reads text file
 * @filename: name of file
 * @letters: number of characters to be read
 * Return: 1 on success -1 on error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int read_result;
	ssize_t result;
	char *c = malloc(letters);

	if (filename == NULL)
	{
		free(c);
		close(fd);
		return (0);
	}
	fd = open(filename, O_RDONLY,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd == -1)
	{
		free(c);
		close(fd);
		return (0);
	}
	read_result = read(fd, c, letters);
	if (read_result == -1)
	{
		free(c);
		close(fd);
		return (0);
	}
	result = write(STDOUT_FILENO, c, letters);
	if (result == -1)
	{
		free(c);
		close(fd);
		return (0);
	}

	close(fd);
	free(c);
	return (result);
}
