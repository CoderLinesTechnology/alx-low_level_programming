#include "main.h"
/**
 * _strchr - Substring
 *@s: string parameter
 *@c: character search parameter
 *
 *Return: string
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	for (; *s >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return ('\0');
}
