#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: first string, destination
 * @src: second string, source*
 * @n: integer
 * Return: Destination
 */

char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;
	char *s = src;
	int c = 0;


	while (*d != '\0')
{
	d++;
}
	for (; c < n && *s != '\0'; c++)
{
	*d = *s;
	d++;
	s++;
}
	*d = '\0';
	return (dest);
}
