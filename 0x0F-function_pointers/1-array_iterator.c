#include <stddef.h>`
/**
*array_iterator - Array Iterator
*@array: array
*@size: size of array
*@action: function to be executed
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !size || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
