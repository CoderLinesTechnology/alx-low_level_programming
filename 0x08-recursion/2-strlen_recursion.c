#include "main.h"

/**
 *_strlen_recursion - Check string length
 *@s: String param
 *Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (i);
	}
	i++;
	return (1 + _strlen_recursion(s + 1));
}
