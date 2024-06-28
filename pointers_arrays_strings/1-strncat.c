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
	while ((c < n) && (c != '\0'))
{
	c++;
	*d = *s;
	dest++;
	src++;
}
	*d = '\0';
	return (dest);
}
