#include "main.h"

/**
*print_last_digit - Print the last digit
*@n: Only parameter
*
*Return: the last number
*/

int print_last_digit(int n)
{
	if (n > 0)
	{
		if (n > 9)
			n %= 10;
	}
	else
	{
		n *= -1;
		n %= 10;
	}
	n *= 11;
	return (n);
}
