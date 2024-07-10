#ifndef DOG_H
#define DOG_H

#include "main.h"

/**
 * struct dog - Structure for dog's informations
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
