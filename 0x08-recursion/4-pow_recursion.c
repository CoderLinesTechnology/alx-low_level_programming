#include "main.h"

/**
*_pow_recursion - Check string length
*@x: first param
*@y: second param
*Return: power
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (_pow_recursion(x *= x, y - 1));
}
