#include "main.h"

/**
 *swap_int - reassign to 98
 *@a: first number param
 *@b: second number
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
