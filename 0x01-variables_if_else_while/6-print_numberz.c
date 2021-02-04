#include <stdio.h>

/**
 * main - execution starts here
 *
 * Return: Always returns 0
 */

int main(void)
{
	int ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}

	putchar('\n');
	return (0);
}
