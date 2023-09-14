#include "main.h"

/**
*more_numbers - print numbers
*
*
*/

void more_numbers(void)
{
	int c = 0;

	while (c <= 14)
	{
		if ( c > 9)
			_putchar('0' + c / 10);
		_putchar('0' + c % 10);
		c++;
	}
	_putchar('\n');
}
