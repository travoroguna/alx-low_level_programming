#include <stdio.h>
/**
 * main - entry point
 * Return: always return 0
 */

int main(void)
{
	long int i, fib, fib1, fib2, add;

	fib1 = 0;
	fib2 = 1;
	add = 0;

	for (i = 0; i < 40; i++)
	{
		fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;
		if (fib < 4000000 && (fib % 2) == 0)
		{
			add = add + fib;
		}
	}
	printf("%ld\n", add);

	return (0);
}
