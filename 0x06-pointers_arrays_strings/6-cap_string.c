#include "main.h"

/**
*cap_string - convert to upper case
*@s: param
*Return: uppercas
*/

char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
	s[0] = s[0] - 32;

	for (i = 1; s[i] != '\0'; i++)
		if (s[i] == '\n' || s[i] == ' ' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!'
		|| s[i] == '?' || s[i] == '(' || s[i] == ')' || s[i] == '{'
		|| s[i] == '\t' || s[i] == '}')
			if (s[++i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
	return (s);
}
