#include "main.h"

/**
*times_table - 9 time program
*
*/
void times_table(void)
{
	int a, b, ans, ext;

	for (a = 48; a < 48 + 10; a++)
	{
		for (b = 48; b < 48 + 10; b++)
		{
			ans = (a - 48) * (b - 48);
			ans += 48;
			if (ans % 57 > 0)
			{
				ext = ans % 57;
				_putchar(ext);
			}
			else
			{
			_putchar(ans);
			}
			if (b < 48 + 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
