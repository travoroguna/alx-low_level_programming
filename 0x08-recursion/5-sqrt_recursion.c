#include "holberton.h"


/**
 * sqrtSearch - Function to find the square
 * @low: low
 * @high: high
 * @N: n
 * Return: square root
 */

int sqrtSearch(int low, int high, int N)
{
	if (low <= high)
	{
		int mid = (low + high) / 2;

		if ((mid * mid <= N) && ((mid + 1) * (mid + 1) > N))
			return (mid);
		else if (mid * mid < N)
			return (sqrtSearch(mid + 1, high, N));
		else
			return (sqrtSearch(low, mid - 1, N));
	}
	return (low);
}


/**
 * _sqrt_recursion - finds the square root
 * @n: number to fingd square root
 * Return: square root of the number
 */

int _sqrt_recursion(int n)
{
	return (sqrtSearch(0, n, n));
}
