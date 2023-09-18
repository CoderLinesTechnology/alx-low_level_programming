
#include "main.h"

/**
*_puts - Print string
*@str: first number param
*
*/

void _puts(char *str)
{
	for (; *str; str++)
		_putchar(*str);
	_putchar('\n');
}
