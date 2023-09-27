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
		return;
	}
	if (*s == '\n')
		_putchar('\n');
	_print_rev_recursion(s++);
	_putchar(*s);
}
