#include "holberton.h"
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


/**
 * create_file - creates a file and writes text_content
 * to the file
 * @filename: name of file
 * @text_content: null terminated string to write
 * Return: Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int res;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

	if (fd == -1)
		return (-1);

	while (*text_content)
	{
		res = write(fd, text_content, 1);

		if (res == -1)
		{
			close(fd);
			return (-1);
		}

		text_content++;
	}

	return (1);
}
