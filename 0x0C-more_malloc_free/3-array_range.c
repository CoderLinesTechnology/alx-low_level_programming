#include "main.h"

/**
*array_range - Function to generate range
*@min: minimum value param
*@max: maximum value param
*
*Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *prt;
	int x;

	if (min > max)
		return (NULL);

	prt = malloc(sizeof(int) * (max - min + 1));
	if (prt == 0)
		return (NULL);

	for (x = 0;min < max; min++, x++)
		prt[x] = min;

	return (prt);
}
