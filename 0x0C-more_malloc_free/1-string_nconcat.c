#include <string.h>
#include "main.h"
/**
*string_nconcat - Concatenate two strings function
*@s1: first string
*@s2: second string to be appended
*@n: size of the appended string
*
*Return: the concatened string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (strlen(s2) < n)
		n = strlen(s2);

	concat = malloc((strlen(s1) + n + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (x = 0; x < strlen(s1); x++)
		concat[x] = s1[x];

	for (y = 0; y < n; y++)
		concat[x + y] = s2[y];

	concat[x + y] = '\0';

	return (concat);
}
