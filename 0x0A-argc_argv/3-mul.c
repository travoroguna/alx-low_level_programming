#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Proram entry point
 * @argc: Number of args passed to main
 * @argv: Array containing arguments passed to main
 * Return: -1 if error else 1 if success
 */

int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (-1);
	}

	int result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);
	return (0);
}
