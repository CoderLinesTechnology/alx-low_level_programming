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

	letter = 122;
	while (letter <= 97)
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
