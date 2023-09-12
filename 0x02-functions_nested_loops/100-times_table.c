#include "main.h"

/**
*print_times_tables - Times
*
*/

void print_times_table(int n)
{
int i, j, p;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			p = i * j;
			if (p > 99)
			{
				_putchar((p / 100) + '0');
				_putchar((p / 10 % 10) + '0');
				_putchar((p % 10) + '0');
			}
			else if (p > 9)
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			else
				_putchar((p % 10) + '0');
			if (j == n)
				continue;
			p = i * (j + 1); /* check next product */
			_putchar(',');
			_putchar(' ');
			if (!(p >= 10))
				_putchar(' ');
			if (!(p >= 100))
			_putchar(' ');
		}
		_putchar('\n');
	}
}
