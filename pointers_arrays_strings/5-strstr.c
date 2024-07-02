#include "main.h"
/**
 * _strstr - a function which locates a substring
 * @haystack: pointer to hello, world
 * @needle: pointer to world
 * Return: NULL or needle
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int l = 0;

	while (i < *haystack)
{
	i++;

	if (l < *needle)
{
	return (needle);
	l++;
}
}
	return ('\0');
}
