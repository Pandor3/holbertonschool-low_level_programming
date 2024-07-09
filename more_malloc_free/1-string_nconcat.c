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
	unsigned int i;
	unsigned int j;
	unsigned int result = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l1 = 0; s1[l1] < '\0'; n++)
	{
	}
	for (l2 = 0; s2[l2] < '\0'; l2++)
	{
	}
	result = result + l1 + l2 + 1;
	if (n >= l2)
	{
		n = l2;
	}
	ptr = malloc(l1 + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < l2; j++)
	{
		ptr[l1 + j] = s2[j];
	}
	ptr[l1 + n] = '\0';
		return (ptr);
}
