#include "main.h"

/**
*print_to_98 - print numbers
*@n: only one param
*
*/

void print_to_98(int n)
{
	for(; n < 98; n++)
	{
		if (n < 0)
		{
			n *= -1;
			_putchar('-');
		}
		if (n > 9)	
		{
			if (n / 10 > 0)
				_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		else
		{
			if (b != 0)
				_putchar(' ');
			_putchar('0' + n);
		}
	}
}
