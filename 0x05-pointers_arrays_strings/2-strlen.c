#include "main.h"

/**
*_strlen - String Length
*@s: first number param
*return: the length
*/

int _strlen(char *s)
{
	int i = 0;

	for (; *s; s++)
		i++;
	return (i);
}
