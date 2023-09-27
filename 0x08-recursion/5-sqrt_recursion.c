#include "main.h"
/**
  * hlp - Finds the square root of two numbers
  *
  * @x: the number
  * @y: the number to test for the square root of @a
  *
  * Return: square root
  */

int hlp(int x, int y)
{
	if (y * y > x)
		return (-1);

	else if (y * y == x)
		return (y);

	else
		return (hlp(x, y + 1));

	return (1);
}

/**
  * _sqrt_recursion - returns the natural square root of a number
  *
  * @n: the number to return the square root to
  *
  * Return: the square root of @n
  */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (hlp(n, 1));
}
