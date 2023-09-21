#include "main.h"

/**
*_strncat - String concatenation
*@dest: first param
*@src: source param
*@n: number of bytes
*Return: string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, size = 0;

	for (; dest[size] != '\0'; size++)
		;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[size + i] = src[i];
	dest[size + i] = '\0';
	return (dest);
}
