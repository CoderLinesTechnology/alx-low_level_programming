#include <stdio.h>

/**
*main - Print out all possible combinations
*of single numbers
*Return:0 (Success)
*/
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
