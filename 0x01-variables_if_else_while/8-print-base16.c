#include <stdio.h>

/**
*main - Print hexadecimal numbers
*
*Return: 0 (Success)
*
*/
int main(void)
{
	int i;
	char hex;

	i = 1;
	while (i <= 15)
	{
	if (i >= 1 && i <= 9)
		hex = i + '0';
	else
	hex = i - 10 + 'a';
		putchar(hex);
		i++;
	}
	putchar('\n');
	return (0);
}
