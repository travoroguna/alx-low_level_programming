#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_valid - checkes if str is valid int
 * @str: string to be cheked
 * Return: i if is valid else 0
 */

int is_valid(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Proram entry point
 * @argc: Number of args passed to main
 * @argv: Array containing arguments passed to main
 * Return: -1 if error else 1 if success
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int idx;

	for (idx = 1; idx < argc; idx++)
	{
		if (is_valid(argv[idx]))
			result += atoi(argv[idx]);
		else
		{
			printf("Error\n");
			return (-1);
		}
	}

	printf("%d\n", result);
	return (0);
}
