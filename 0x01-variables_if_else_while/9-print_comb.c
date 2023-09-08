#include <stdio.h>

/**
*main - Print out all possible combinations
*of single numbers
*Return:0 (Success)
*/
int main(void)
{
	int i;
	int y;

	for (i = 48; i <= 57; i++)
		for(y = 48; y <= 57; y++)
		{
			putchar(i);
			putchar(y);
			putchar(',');
			putchar(' ');
		}
	return (0);
}
