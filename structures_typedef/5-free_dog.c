#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - function which free the dog
 * @d: pointer to structure of dog_t
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
