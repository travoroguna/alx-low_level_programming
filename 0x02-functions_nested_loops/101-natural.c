#include <stdio.h>

/**
* main - entry point
* Return: always return 0
*/
int main(void)
{
	int i, result;

	result = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			result = result + i;
		}
	}
	printf("%d\n", result);
	return (0);
}
