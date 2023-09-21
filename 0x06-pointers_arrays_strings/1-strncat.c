#include "main.h"

/**
*_strcat - String concatenation
*@dest: first param
*@src: source param
*@n: number of bytes
*Return: string
*/

char *_strcat(char *dest, char *src, int n)
{
	int size = 0;

	for (; dest[size] != '\0'; size++)
		;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[size + i] = src[i];
	dest[size + i] = '\0';
	return (dest);
}
