#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct Buffer
{
	size_t size;
	char buff[1024];
	int f_out;
} Buffer;

int flush_buffer(Buffer *buffer);
void write_buffer(Buffer *buffer, char *character, size_t size);
int c_open(char *file_path, int oflag, char *error, int return_code);
void c_close(int fd);


/**
 * flush_buffer - clear a buffer
 * @buffer: pointer to the buffer
 * Return: bytes cleared from the buffer
 */

int flush_buffer(Buffer *buffer)
{
	int result = write(buffer->f_out, buffer->buff, buffer->size);

	buffer->size = 0;
	return (result);
}

/**
 * write_buffer -  write to a buffer
 * @buffer: pointer to the buffer
 * @character: none null terminated string to be written
 * @size: size of buffer
 */

void write_buffer(Buffer *buffer, char *character, size_t size)
{
	size_t count = 0;

	for (count = 0; count < size; count++)
	{
		if (buffer->size >= 1024)
			flush_buffer(buffer);

		buffer->buff[buffer->size] = *(character + count);
		buffer->size++;
	}
}

/**
 * c_open - open a file
 * @file_path: path to the file
 * @oflag: opening flags
 * @error: error message to be displayed on error
 * @return_code: code to be passed to exit on error
 * Return: file descriptor of the open file
 */

int c_open(char *file_path, int oflag, char *error, int return_code)
{
	int fd;

	fd = open(file_path, oflag,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd == -1)
	{
		dprintf(2, error, file_path);
		exit(return_code);
	}
	return (fd);
}

/**
 * c_close - close a file
 * @fd: file descriptor
 */

void c_close(int fd)
{
	int res = close(fd);

	if (res == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - check the code for Holberton School students.
 * @ac: number of parameters passes
 * @av: array of strings of the parameters passed
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	Buffer buffer;
	int fd_in, fd_out, fd_in_res;
	char inpt[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_out = c_open(av[2], O_WRONLY | O_CREAT | O_TRUNC,
			"Error: Can't write to %s\n", 99);

	fd_in = open(av[1], O_RDONLY,
			"Error: Can't read from %s\n", 98);

	buffer.size = 0;
	buffer.f_out = fd_out;

	while (1)
	{
		fd_in_res = read(fd_in, inpt, 1024);

		if (fd_in_res > 0)
			write_buffer(&buffer, inpt, fd_in_res);
		else
			break;
	}
	flush_buffer(&buffer);
	c_close(fd_in);
	c_close(fd_out);
	return (0);
}
