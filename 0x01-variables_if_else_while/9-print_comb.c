#include <stdio.h>

/**
 * main - execution starts here
 *
 * Return: Always returns 0
 */

int main(void)
{
	int ch = '0';

	while (ch <= (int)'9')
	{
		putchar(ch);

		if (ch != 57)
		{
		putchar(',');
		putchar(' ');
		}
		ch++;
	}

	putchar('\n');
	return (0);
}
