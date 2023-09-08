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
	int z;

	for (x = 48; x <= 57; x++)
		for (y = 0; y <= 57; y++)
		{
			for(z = 48; z <= 57; z++)
			{
				if (y <= x)
					continue;
				putchar(x);
				putchar(y);
				putchar(z);
				if (x < 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');
	return (0);
}
