#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - function which creates an array of chars
 * @size: size of the array
 * @c: characters in the array
 * Return: NULL, c or **ptr
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
