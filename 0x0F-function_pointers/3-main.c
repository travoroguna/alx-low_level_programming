#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: size of argv
 * @argv: command line args
 * Return: always Zero
 */

int main(int argc, char **argv)
{
	int (*func_ptr)(int, int);
	int a;
	int b;
	char sign;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	sign = argv[2][0];


	if ((sign != '+' && sign != '-' && sign != '/'
	&& sign != '*' && sign != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func_ptr = get_op_func(argv[2]);

	if ((sign == '/' || sign == '%') && (b == 0))
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", (*func_ptr)(a, b));
	return (0);
}
