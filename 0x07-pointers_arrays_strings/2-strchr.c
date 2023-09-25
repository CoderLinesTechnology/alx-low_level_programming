#include "main.h"
/**
 * _memcpy - Copy the number of bytes
 *@s: string parameter
 *@c: character search parameter
 *
 *Return: string
 */

char *_strchr(char *s, char c)
{
	char *sub;
	int x = 0;

	if (s == NULL)
		return (NULL);
	if (c == '\0')
		return (s)
	for (; *s != '\0'; s++, x++)
	{
		if (*(s + x) == c)
			return (s);
	}
	return (NULL);
}
