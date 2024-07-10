#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure for dog's informations
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} ptr_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
