#include <stdio.h>
#include<math.h>


/**
 * get_max_primefactor - gets maximum prime factor
 * @n: number to get largest prime factor
 * Return: largest prime factor of n
 */

int get_max_primefactor(long int n)
{
	int i, max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	if (n > 2)
	{
		max = n;
	}

	return (max);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	long largest = get_max_primefactor(612852475143);

	printf("%ld\n", largest);

	return (0);
}
