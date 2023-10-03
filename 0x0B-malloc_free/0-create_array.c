#include <stdlib>
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
	int x = 0;

	i = malloc(size);
	if(size == 0)
		return (NULL);
	for (;x < size;)
	{
		i[x] = c;
		x++;
	}
	return (i);
}
