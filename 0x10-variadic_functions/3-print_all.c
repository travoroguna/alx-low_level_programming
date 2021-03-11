#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - function that prints anything.
* @format: string format
* @...: variables to print
*/

void print_all(const char * const format, ...)
{
	int found = 1;
	char current;
	char *s_char;
	va_list c_ptr;
	int idx = 0;

	va_start(c_ptr, format);
	while (*(format + idx) != '\0')
	{
		current = *(format + idx);
		found = 1;
		switch (current)
		{
			case 'c':
				printf("%c", va_arg(c_ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(c_ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(c_ptr, double));
				break;
			case 's':
				s_char = va_arg(c_ptr, char *);
				if (s_char == NULL)
					printf("%s", "(nil)");
				else
					printf("%s", s_char);
				break;
			default:
				found = 0;
				break;
		}
		if (found && *(format + idx + 1) != '\0')
			printf(", ");
		idx++;
	}
	printf("\n");
}
