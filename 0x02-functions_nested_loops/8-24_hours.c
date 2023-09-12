#include "main.h"

/**
*jack_bauer - Show time 00:00 to 23:59
*
*/

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 48; a <= 48 + 2; a++)
		for (b = 48; b <= 48 + 9; b++)
			for (c = 48; c <= 48 + 5; c++)
				for (d = 48; d <= 48 + 9; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}


}
