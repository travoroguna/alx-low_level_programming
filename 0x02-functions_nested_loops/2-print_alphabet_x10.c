#include "holberton.h"


/**
 * print_alphabet - prints the alphabet.
 *
 */

void print_alphabet_x10(void)
{	
	int count = 0;

	while(count < 10)
	{
		print("abcdefghijklmnopqrstuvwxyz");
		count++;
	}
	print("\n");
}
