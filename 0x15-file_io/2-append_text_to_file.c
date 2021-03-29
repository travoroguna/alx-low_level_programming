#include "holberton.h"
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


/**
 * append_text_to_file - append text to file
 * @filename: name of file
 * @text_content: text to add to file
 * Return: Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int res;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY,
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

	close(fd);
	return (1);
}
