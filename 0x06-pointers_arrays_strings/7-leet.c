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
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == c[j][0] || s[i] == c[j][1])
			{
				s[i] = c[j][2];
				break;
			}
		}
	}
	return (s);
}
