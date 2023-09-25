#include "main.h"
/**
*_strstr - Finds the first occurrence of
*the substring needle in the string haystack
*@haystack: first param
*@needle: second param
*
*Return: result
*/
char *_strstr(char *haystack, char *needle)
{
	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (!*n)
			return (haystack);

		haystack++;
	}
	return ('\0');
}
