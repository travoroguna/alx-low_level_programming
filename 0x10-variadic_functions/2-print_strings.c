#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
* print_strings - function that prints strings, followed by a new line.
* @separator: separator between strings
* @n: number of args
* @...: variable args
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int idx;
	char *str;
	va_list arg_ptr;

	va_start(arg_ptr, n);

	for (idx = 0; idx < (int)n; idx++)
	{
		str = va_arg(arg_ptr, char *);

		if (idx != (int)n - 1)
		{
			printf("%s", (str != NULL) ? str : "(nil)");

			if (separator != NULL)
				printf("%s", separator);
		}
		else
		{
			printf("%s", str);
		}
	}
	va_end(arg_ptr);
	printf("\n");
}
