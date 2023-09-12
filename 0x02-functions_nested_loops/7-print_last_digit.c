#include "main.h"

/**
*print_last_digit - Print the last digit
*@n: Only parameter
*
*Return: the last number
*/

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	n %= 10;
	return (n * 11);
}
