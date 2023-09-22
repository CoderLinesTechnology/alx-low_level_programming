#include "main.h"

/**
*cap_string - convert to upper case
*@s: param
*Return: uppercas
*/

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == ',' || s[i] == ';' || s[i] == '.' s[i] == '!'
		|| s[i] == '?' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
			if (string[++i] >= 'a' && string[i] <= 'z')
				string[i] = string[i] - 32;
	return (string);
}
