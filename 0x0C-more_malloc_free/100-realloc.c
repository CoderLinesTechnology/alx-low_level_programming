#include "main.h"
/**
*_realloc - Function to re allocate memory
*@ptr: pointer
*@old_size: old memory size param
*@new_size: new memory size param
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int min_size, x;
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return NULL;
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		min_size = (old_size < new_size) ? old_size : new_size;
		for (x = 0; x < min_size; x++)
			((char *)new_ptr)[x] = ((char *)ptr)[x];
		free(ptr);
	}
	return (new_ptr);
}
