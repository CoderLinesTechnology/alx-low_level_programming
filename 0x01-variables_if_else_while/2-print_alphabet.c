#include <stdio.h>

/**
*main - Print lower case letters
*
*Return: 0 (Success)
*
*/
int main(void)
{
	int letter;

	letter = 97;
	while (letter <= 122)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
