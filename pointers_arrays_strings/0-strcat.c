#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: first string, destination
 * @src: second string, source
 * Return: destination fused with the source.
 */

char *_strcat(char *dest, char *src)
{
	char *i = dest;

for (; *i != '\0'; i++)
{
}
	while (*src != '\0')
{
	*i = *src;
	i++;
	src++;
}
	*i = '\0';
	return (dest);
}
