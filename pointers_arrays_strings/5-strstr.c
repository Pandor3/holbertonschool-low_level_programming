#include "main.h"
#include <stdio.h>
/**
 * _strstr - a function which locates a substring
 * @haystack: pointer to hello, world
 * @needle: pointer to world
 * Return: NULL or needle
 */

char *_strstr(char *haystack, char *needle)
{
	if (!*needle)
{
	return (haystack);
}

	for (; *haystack; haystack++)
{
	char *a = haystack;
	char *b = needle;

	while (*a && *b && (*a == *b))
{
	a++;
	b++;
}

	if (!*b)
{
	return (haystack);
}
}
	return ('\0');
}
