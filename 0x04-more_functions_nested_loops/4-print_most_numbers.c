
#include "main.h"

/**
*print_numbers - print numbers
*
*
*/

void print_numbers(void)
{
	int c = 48;

	while (c <= 57)
	{
		if ( c == 50 || c == 52)
		{
			continue;
			c++;
		}
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
