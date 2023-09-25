#include "main.h"
/**
 *_strpbrk - Substring break
 *@s: string parameter
 *@accept: character search parameter
 *
 *Return: number of bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return (0);
}
