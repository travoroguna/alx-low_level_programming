#ifndef HOLBERTON_H
#define HOLBERTON_H


int _putchar(char c);

/**
 * print - prints a char*
 *
 * @string: constant string pointer
 */

void print(const char *string)
{
	int idx = 0;

	while (string[idx] != '\0')
	{
		_putchar(string[idx]);
		idx++;
	}			
}

void print_alphabet(void);
void print_alphabet_x10(void);

#endif
