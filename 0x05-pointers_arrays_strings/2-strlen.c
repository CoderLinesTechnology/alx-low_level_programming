#include "main.h"

/**
 *_strlen - String Length
 *@s: first number param
 */

int _strlen(char *s)
{
	int i = 1;

	for (; *s; s++)
		i++;
	return (i);
}
