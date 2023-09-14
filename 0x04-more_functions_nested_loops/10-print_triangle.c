#include "main.h"

/**
*print_triangle - print triangle
*@size: only parameter
*
*/

void print_triangle(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (z = size - x; z != 0; z--)
			_putchar(' ');
		for (y = 0; y < size; y++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
	_putchar('\n');
}
