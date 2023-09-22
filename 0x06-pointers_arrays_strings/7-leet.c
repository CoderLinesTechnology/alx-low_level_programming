#include "main.h"

/**
*leet - Decode specific characters
*@s: first param
*
*Return: encoded
*/

char *leet(char *s)
{
	char c[5][3] =  {{'a', 'A', '4'}, {'e', 'E', '3'},
	{'o', 'O', '0'}, {'t', 'T', '7'}, {'l', 'L', '1'}};
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c[i][0] || s[i] == c[i][1])
		{
			s[i] = c[i][2];
		}
	}
	return (s);
}
