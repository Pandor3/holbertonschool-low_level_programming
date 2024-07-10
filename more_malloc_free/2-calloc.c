#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function which allocates memory for an array
 * @nmemb: number of elements
 * @size: size of array
 * Return: NULL or ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	unsigned char *j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	j = (unsigned char *)ptr;
	for (i = 0; i < (nmemb * size); i++)
	{
		j[i] = 0;
	}
	return (ptr);
}
