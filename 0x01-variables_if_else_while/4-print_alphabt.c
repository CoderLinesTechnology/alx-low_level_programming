#include <stdio.h>

/**
*main - Print lower case letters except
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
		if (letter == 101 && letter == 113)
			continue;
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
