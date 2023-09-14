#include "main.h"

/**
*print_number - Print number using _putchar
*@n: parameter
*
*/


void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
		m = -n;
	if (m == 0)
	{
		_putchar('0');
		return;
	}

	print_number(m / 10);
	_putchar(m % 10 + '0');
}

