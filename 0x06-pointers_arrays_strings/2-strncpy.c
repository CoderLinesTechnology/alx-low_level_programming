#include "main.h"

/**
*_strncpy - Copy String
*@dest: first param
*@src: source param
*@n: number of bytes
*Return: string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
