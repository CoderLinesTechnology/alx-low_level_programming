#include "dog.h"

/**
*init_dog - Function to intialize dog function
*@d: Pointer parameter
*@name: dog name parameter
*@age: dog age parameter
*@owner: dog owner parameter
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
