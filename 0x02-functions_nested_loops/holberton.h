#ifndef HOLBERTON_H
#define HOLBERTON_H


int _putchar(char c);

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

#endif
