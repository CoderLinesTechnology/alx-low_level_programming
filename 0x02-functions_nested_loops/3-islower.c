#include "main.h"

/**
*_islower - To check if character is lower case or not
*@c: Only parameter
*Return: 1 if lower and 0 if not
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
