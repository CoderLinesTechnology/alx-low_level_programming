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
<<<<<<< HEAD
	_putchar(n);	
	return (n);
=======
	return (n * 11);
>>>>>>> 230cfa9b9a1138ae57b6bd34f4a4e5522caf4476
}
