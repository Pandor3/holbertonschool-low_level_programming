#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: first pointer, destination
 * @src: second pointer, source
 * @n: integer
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

while (a < n && src[a] != '\0')
{
	a++;
	dest[a] = src[a];
}
while (a < n)
{
	a++;
}
	dest[a] = '\0';
	return (dest);
}
