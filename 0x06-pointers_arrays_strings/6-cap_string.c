#include "main.h"

/**
*cap_string - Convert the first letter
*of each word to uppercase.
*@s: The input string.
*Return: Pointer to the modified string.
*/
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= ('a' - 'A');
		else if (s[i] == ' ' || s[i] == '\n' || s[i] == ','
			|| s[i] == ';' || s[i] == '.' ||
			s[i] == '!' || s[i] == '?' || s[i] == '(' || s[i] == ')' || s[i] == '{' ||
			s[i] == '}' || s[i] == '\t')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= ('a' - 'A');
			}
		}
	}

	return (s);
}

