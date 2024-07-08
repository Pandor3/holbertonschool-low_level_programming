#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function which concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL or ptr
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	char *i = s1;

	ptr = malloc(sizeof(i) + 1);

	for (; *i != '\0'; i++)
	{
	}
	while (*s2 != '\0')
	{
		*i = *s2;
		i++;
		s2++;
	}
		s1 = s2;
		*i = '\0';
		return (ptr);
}
