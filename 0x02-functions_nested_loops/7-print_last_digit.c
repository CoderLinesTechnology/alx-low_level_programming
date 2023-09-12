#include "main.h"

/**
*print_last_digit - Print the last digit
*@n: Only parameter
*
*Return: the last number
*/

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		a = -1 * (n % 10);
	else
		a = n % 10;
	_putchar('0' + a);
	return (a);
}
