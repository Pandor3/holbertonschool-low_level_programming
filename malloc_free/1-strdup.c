#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	return (ptr);
}
