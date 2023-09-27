#include "main.h"

/**
 *_print_rev_recursion - Puts clone
 *@s: String param
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(++s);
	_putchar(*s);
}
