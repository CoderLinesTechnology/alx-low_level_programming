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

	if (s == NULL)
		return (NULL);
	if (c == '\0')
		return (s);
	for (; *s != '\0'; s++, x++)
	{
		if (*(s + x) == c)
			return (s + x);
	}
	return (NULL);
}
