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
	int i = 0;
	int result = 0;
	int l1;
	int l2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l1 = 0; s1[l1] < '\0'; l1++)
	{
	}
	for (l2 = 0; s2[l2] < '\0'; l2++)
	{
	}
	result = result + l1 + l2 + 1;
	ptr = malloc(sizeof(char) * result);
	if (ptr == 0)
	{
		return (NULL);
	}
	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
		ptr[i] = s1[l1];
		i++;
	}
	for (l2 = 0; s2[l2] != '\0'; l2++)
	{
		ptr[i] = s2[l2];
		i++;
	}
	ptr[i + 1] = '\0';
	return (ptr);
}
