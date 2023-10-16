#include "dog.h"

/**
*_strlen - returns the length of a string
*@str: string to be counted
*Return: length of the string
*/
int _strlen(char *str)
{
	int length = 0;

	while (*str)
	{
		length++;
		str++;
	}

	return (length);
}

/**
 * _strcopy - copy string pointed by src into dest variable
 * @dest: buffer storing copied string
 * @src: buffer storing string to copy
 * Return: copied string
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: returns NULL in case of failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (name == NULL || age < 0 || owner == NULL)
	return (NULL);

	if (newDog == NULL)
	return (NULL);

	newDog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	_strcopy(newDog->name, name);
	newDog->age = age;
	_strcopy(newDog->owner, owner);

	return (newDog);
}
