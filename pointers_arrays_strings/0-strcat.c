#include "main.h"
#include "2-strlen.c"
/**
 * _strcat - a function which concatenates two strings
 * @src: source character
 * @dest: destination character
 * Return: src at the end of dest
*/

char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*i != '\0')
{
	i++;
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
