#include <stdlib.h>
/**
*create_array - Create an array with size specified
*@size: Size of array
*@c: char
*
*Return: Pointer
*/

char *create_array(unsigned int size, char c)
{
	char *i;

	i = malloc(size);
	if (size == 0 || i == 0)
		return (0);
	while (size--)
	{
		i[size] = c;
	}
	return (i);
}
