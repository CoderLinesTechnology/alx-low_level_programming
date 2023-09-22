#include "main.h"
#include <string.h>

/**
*infinite_add - Adds two numbers stored as strings.
*@n1: The first number as a string.
*@n2: The second number as a string.
*@r: The buffer to store the result.
*@size_r: The size of the result buffer.
*
*Return: A pointer to the result buffer, or NULL if buffer is too small.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int digit = 0;
	int i, j, k;

	if ((strlen(n1) + strlen(n2)) >= (size_t)size_r)
	{
		return (0);
	}

	for (i = strlen(n1) - 1, j = strlen(n2) - 1, k = size_r - 1;
	i >= 0 || j >= 0; i--, j--, k--)
	{
		digit = carry + (i >= 0 ? n1[i] - '0' : 0) + (j >= 0 ? n2[j] - '0' : 0);
		carry = digit / 10;
		digit %= 10;
		r[k] = digit + '0';
	}

	if (carry)
	{
		r[0] = carry + '0';
		size_r++;
	}

	return (r);
}
