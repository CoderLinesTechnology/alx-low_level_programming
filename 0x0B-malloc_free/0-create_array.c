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
	char *i = malloc(size);

	if (size == 0)
		return (NULL);
	while (size--)
	{
		i[size] = c;
	}
	return (i);
}
