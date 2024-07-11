#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - it's the new dog !
 * @name: it's name of the new dog
 * @age: it's the age of the new dog
 * @owner: the owner of the new dog
 * Return: NULL or ptr
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	void *ptr;
	char *name = d->name;
	float age = d->age;
	char *owner = d->owner;

	ptr = malloc(dog_t);
	if (ptr == NULL)
	{
		return (NULL);
	}
}
