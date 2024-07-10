#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function which creates an array of integers
 * @min: lowest number of array
 * @max: highest number of array
 * Return: NULL or ptr
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int result;

	if (min > max)
	{
		return (NULL);
	}
	result = max - min + 1;
	ptr = malloc(sizeof(int) * result);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < result; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
