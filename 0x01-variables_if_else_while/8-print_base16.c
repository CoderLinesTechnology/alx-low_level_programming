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

	i = 0;
	while (i <= 15)
	{
	if (i >= 0 && i <= 9)
		hex = i + '0';
	else
	hex = i - 10 + 'a';
		putchar(hex);
		i++;
	}
	putchar('\n');
	return (0);
}
