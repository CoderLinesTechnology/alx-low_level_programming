#include <stdio.h>

/**
*main - combination of numbers
*
*Return: 0 (Success)
*/
int main(void)
{
	int x;
	int j;

	for (x = 0; x < 100; x++)
	{
		for (j = 0; j < 100; j++)
		{
			if (x < j)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (x != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
