#include "main.h"
/**
*print_alphabet_x10 - printing list of alphabet X10 using _putchar
*
*/
void print_alphabet_x10(void)
{
	int i, letter;

	i = 0;
	while (i < 10)
	{
		letter = 97;
		while (letter <= 122)
		{
			_putchar(letter++);
		}
		_putchar('\n');
		i++;
	}
}
