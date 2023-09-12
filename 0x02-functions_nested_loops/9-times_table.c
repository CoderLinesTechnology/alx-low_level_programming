#include "main.h"

/**
*times_table - 9 time program
*
*/
void times_table(void)
{
	int a, b, ans;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			ans = a * b;
			if (ans > 9)
			{
				if (ans / 10 > 0)
					_putchar('0' + ans / 10);
				_putchar('0' + ans % 10);
			}
			else
			{
			_putchar(' ');
			_putchar('0' + ans);
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
