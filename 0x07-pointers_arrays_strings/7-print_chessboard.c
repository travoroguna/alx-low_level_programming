#include "holberton.h"


/**
 * print_chessboard - prints an 8x8 chessboard
 * @a: chessboard representation
 */

void print_chessboard(char (*a)[8])
{
	int idx, idy;

	for (idx = 0; idx < 8; idx++)
	{
		for (idy = 0; idy < 8; idy++)
		{
			_putchar(a[idx][idy]);
		}
		_putchar('\n');

	}
}
