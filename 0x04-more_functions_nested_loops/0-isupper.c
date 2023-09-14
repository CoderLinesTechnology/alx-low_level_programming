#include "main.h"

/**
*_isupper - Check if a letter is upper case
*@c: Character parameter
*Return: 0 for uppercase else 1
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (0);
	else
		return (1);
}
