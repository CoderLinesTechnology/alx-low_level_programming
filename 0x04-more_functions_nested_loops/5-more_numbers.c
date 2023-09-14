#include "main.h"

/**
*more_numbers - print numbers
*
*/

void more_numbers(void)
{
	int x, c = 0;

	x = 0;
	while (x < 10)
	{
		while (c <= 14)
		{
			if ( c > 9)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			c++;
		}
		_putchar('\n');
	}
}
