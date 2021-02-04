#include <stdio.h>

/**
 * main - execution starts here
 *
 * Return: Always returns 0
 */

int main(void)
{
	int ch = '0';
	int cz = '0';

	while (ch <= '9')
	{
		while (cz <= '9')
		{
			putchar(ch);
			putchar(cz);
			if (cz + ch < 57 * 2)
			{
				putchar(',');
				putchar(' ');
			}
		cz++;
		}
		cz = '0';
		ch++;
	}

	putchar('\n');
	return (0);
}
