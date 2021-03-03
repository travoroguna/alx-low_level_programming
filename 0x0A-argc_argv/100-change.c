#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


/**
 * min_coins - calculate number of coins to make change for an amount of money.
 * @cnts: money
 * Return: number of coins
 */

int min_coins(int cnts)
{
	int table[] = malloc(sizeof(int) * (cnts+1));
	int i, j, sub_res, result;
	int coins[] = {25, 10, 5, 2, 1};
	int size = 5;

	table[0] = 0;

	for (i = 1; i <= cnts; i++)
		table[i] = INT_MAX;

	for (i = 1; i <= cnts; i++)
	{
		for (j = 0; j < size; j++)
		if (coins[j] <= i)
		{
			sub_res = table[i - coins[j]];

			if (sub_res != INT_MAX && sub_res + 1 < table[i])
				table[i] = sub_res + 1;
		}
	}

	if (table[cnts] == INT_MAX)
		return (-1);

	result = table[cnts];
	free(table);
	return (result);
}
/**
 * main - Proram entry point
 * @argc: Number of args passed to main
 * @argv: Array containing arguments passed to main
 * Return: -1 if error else 1 if success
 */

int main(int argc, char *argv[])
{
	int cnts;

	if (argc != 2)
	{
		printf("Error\n");
		return (-1);
	}
	else
	{
		cnts = atoi(argv[1]);
		if (cnts < 0)
			printf("0\n");
		else
			printf("%d\n", min_coins(cnts));
	}

	return (0);
}
