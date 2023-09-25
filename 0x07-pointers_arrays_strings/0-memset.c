#include "main.h"

/**
 *_memset - function that fills memory with a constant byte
 *@s: first param
 *@b: second param
 *@n: third param
 *
 *Return: Constant byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(s + x) = b;
	return (s);
}
