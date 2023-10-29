#include "main.h"
/**
*binary_to_unit - Function that converts a binary to a number
*@b: binary parameter
*Return: interger on success
*/

unsigned int binary_to_uint(const char *b)
{
	int counter;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	for (counter = 0; b[counter] != '\0'; counter++)
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0);
		decimal = decimal * 2 + (b[counter] - '0');
	}

	return (decimal);
}
