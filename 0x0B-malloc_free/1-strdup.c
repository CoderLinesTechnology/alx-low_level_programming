#include <stdlib.h>
#include <string.h>
/**
*_strdup - Copy a string given in the parameter
*@str: First string
*
*Return: a pointer to a newly allocated space in memory
*/

char *_strdup(char *str)
{
	char *c;

	if (str == NULL)
		return (NULL);

	c = malloc(strlen(str) + 1);
	if (c == NULL)
		return (NULL);

	strcpy(c, str);

	return (c);
}
