#include "dog.h"

/**
*new_dog - Function to create new dog
*@name: dog name
*@age: dog age
*owner: dog owner
*Return: return new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogt

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogt = malloc(sizeof(dog_t));
	if (dogy == NULL)
		return (NULL);

	dogt->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogt->name == NULL)
	{
		free(dogt);
		return (NULL);
	}

	dogt->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogt->owner == NULL)
	{
		free(dogt->name);
		free(dogt);
		return (NULL);
	}

	dogt->name = _strcopy(dogt->name, name);
	dogt->age = age;
	dogt->owner = _strcopy(dogt->owner, owner);

	return (dogt);
}

/**
*_strlen - Check string length
*@str: string parameter
*Return: success
*/

int _strlen(char *str)
{
	int len = 0;
	while (str)
	len++;

	return (len);
}

/**
*_strcopy - Copy string function
*@dest: Destination parameter
*@src: source parameters
*Return: Success
*/

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (; src[index] ; index++)
	dest[index] = src[index];

	dest[index] = '\0';
	return (dest);
}
