#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function which allocates memory
 * @b: unsigned integer
 * Return: NULL or ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
		return (ptr);
}
