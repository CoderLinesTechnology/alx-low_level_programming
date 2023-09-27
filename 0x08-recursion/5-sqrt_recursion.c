#include "main.h"
/**
 * find_sqrt - Helper function to find the
 * natural square root of a number using binary search
 * @n: The number for which to find the square root
 * @low: The lower bound of the search range
 * @high: The upper bound of the search range
 *
 * Return: The natural square root of the number,
 * or -1 if no natural square root exists
 */
int find_sqrt(int n, int low, int high)
{
	int mid, square;

	if (low > high)
		return (-1);

	mid = (low + high) / 2;
	square = mid * mid;

	if (square == n)
		return (mid);
	else if (square < n)
		return (find_sqrt(n, mid + 1, high));
	else
		return (find_sqrt(n, low, mid - 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number for which to find the square root
 *
 * Return: The natural square root of the number,
 * or -1 if no natural square root exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* Negative numbers don't have natural square roots */

	/* Call the helper function with appropriate initial values */
	return (find_sqrt(n, 0, n));
}
