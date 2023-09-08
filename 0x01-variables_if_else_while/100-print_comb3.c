#include <stdio.h>

/**
*main - combination of numbers
*
*Return: 0 (Success)
*/
int main(void)
{
	int x;
	int y;

	for (x = 48; x <= 57; x++)
		for (y = 0; y <= 57; y++)
		{
			if (y <= x)
				continue;
			putchar(x);
			putchar(y);
			if (x < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
