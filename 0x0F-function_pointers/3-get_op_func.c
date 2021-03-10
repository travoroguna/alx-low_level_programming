#include "3-calc.h"

/**
 * get_op_func - function that gets the operator function
 * @s: sign to get function
 * Return: pointer to the required function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (*s == *(ops[i]).op)
			return (*(ops[i]).f);
		i++;
	}

	return (NULL);
}
