#include "main.h"
/**
 * _strspn - Substring count
 *@s: string parameter
 *@accept: character search parameter
 *
 *Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept);
{
	int i, j;
	int x = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
				x++;
		}				
	}
	return (x);
}
