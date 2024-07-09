#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - function with a pointer to a 2D array of integers
 * @width: integer for longueur
 * @height: integer for hauteur
 * Return: NULL or ptr
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}

	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}