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

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	if (name == NULL)
		free(d);
	d->age = age;
	if (age < 0)
		return (NULL);
	d->owner = owner;
	if (owner == NULL)
	{
		free(name);
		free(d);
	}
	return (d);
}
