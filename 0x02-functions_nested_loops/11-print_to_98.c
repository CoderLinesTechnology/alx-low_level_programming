#include <stdio.h>
#include "main.h"

/**
*print_to_98 - print numbers
*@n: only one param
*
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
			printf("%d%s", n, (n != 98) ? ", " : "");
		printf("\n");
	}
	else
	{
		for (; n <= 98; n++)
			printf("%d%s", n, (n != 98) ? ", " : "");
		printf("\n");
	}
}
