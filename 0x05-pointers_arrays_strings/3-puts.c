
#include "main.h"

/**
*_puts - Print string
*@s: first number param
*
*/

void _puts(char *str)
{
	int i = 0;

	for (; *str; str++)
		_putchar(*str);
	_putchar('\n');
}
