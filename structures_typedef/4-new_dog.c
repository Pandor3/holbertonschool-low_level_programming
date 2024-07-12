#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - it's the new dog !
 * @name: it's name of the new dog
 * @age: it's the age of the new dog
 * @owner: the owner of the new dog
 * Return: NULL or d
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
		free(d);
	}
	d->name = _strdup(name);
	if (d->name == NULL)
		free(d);
	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(name);
		free(d);
	}
	d->age = age;
	if (d->age < 0)
	{
		free(name);
		free(owner);
		return (NULL);
	}
	return (d);
}

/**
 * _strdup - returns a pointer which copies a string
 * @str: pointer to the string
 * Return: NULL or ptr
 */

char *_strdup(char *str)
{
	int n;
	int i = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (n =  0; str[n] != '\0'; n++)
	{
	}

	ptr = malloc(sizeof(char) * n + 1);
	if (ptr == 0)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
