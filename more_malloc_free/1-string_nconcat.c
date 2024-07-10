#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function which concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: unsigned integer
 * Return: ptr or nothing
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int l1;
	unsigned int l2;
	unsigned int com;
	int result = 0;
	int i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
	}
	for (com = 0; s2[com] != '\0'; com++)
	{
	}
	l2 = n >= com ? com : n;
	result = l1 + l2 + 1;
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
	for (com = 0; com < l2; com++)
	{
		ptr[i] = s2[com];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
