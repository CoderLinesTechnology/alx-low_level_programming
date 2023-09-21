#include "main.h"

/**
*_strcat - String concatenation
*@dest: first param
*@src: source param
*
*Return: string
*/

char *_strcat(char *dest, char *src)
{
	int i, size = 0;

	for (; *dest; dest++)
		size++;

	for (i = 0; src[i] != '\0'; i++)
		dest[size + i] = src[i];
	dest[size + i] = '\0';
	return (dest);
}
