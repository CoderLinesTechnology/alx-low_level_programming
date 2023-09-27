#include <stdio.h>

/**
 * _sqrt - Helper function to find the
 * natural square root of a number using binary search
 * @n: The number for which to find the square root
 *
 * Return: The natural square root of the number,
 * or -1 if no natural square root exists
 */
int _sqrt(int n)
{
	int low, high, mid;
	long long square;

	if (n < 0)
	return -1; /* Negative numbers don't have natural square roots */

	low = 0;
	high = n;

	while (low <= high)
	{
	mid = low + (high - low) / 2;
	square = (long long)mid * mid;

		if (square == n)
			return mid; /* Found the exact square root */
		else if (square < n)
			low = mid + 1; /* Continue searching in the upper half */
		else
			high = mid - 1; /* Continue searching in the lower half */
	}

	return -1; /* No natural square root exists */
}

int _sqrt_recursion(int n)
{
	return _sqrt(n);
}
