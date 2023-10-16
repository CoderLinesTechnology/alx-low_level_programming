#ifndef DOG_H
#define DOG_H

/**
 * struct dog - blueprint for dog entity
 * @name: name of dog
 * @owner: name of dog's owner
 * @age: dog's age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
#endif
