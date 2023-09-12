#include "main.h"
/**
*main - printing list of characters using _putchar
*
*Return: 0 (Success)
*/
int main(void)
{
	int i = 0;
	char c[10] = "_putchar";

	while (c[i] != '\0')
	{
		_putchar(c[i++]);
	}
	_putchar('\n');
	return (0);
}
