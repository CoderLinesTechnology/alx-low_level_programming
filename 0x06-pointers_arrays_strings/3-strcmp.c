#include "main.h"

/**
*_strcmp - COmpare two strings
*@s1: first string
*@s2: second string
*Return: 0 for equal, 1 for first param is
*greater than the second and -1 otherwise
*/

int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2; s1++, s2++)
	{
		if (!*s2)
			return (0);
	}
	return (*s1 - *s2);
}
