#include "holberton.h"
#include <stdio.h>


/**
 * main - Proram entry point
 * @argc: Number of args passed to main
 * @argv: Array containing arguments passed to main
 * Return: -1 if error else 1 if success
 */

int main(int argc, char *argv[])
{
	int idx;

	for (idx = 0; idx < argc; idx++)
	{
		printf("%s\n", argv[idx]);
	}

	return (0);
}
