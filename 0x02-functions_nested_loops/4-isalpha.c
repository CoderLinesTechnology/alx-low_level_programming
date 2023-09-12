#include "main.h"

/**
*_isalpha - To check if character is alphabet or not
*@c: Only parameter
*Return: 1 if lower and 0 if not
*/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);

}
