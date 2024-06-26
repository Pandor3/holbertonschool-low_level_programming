#include "main.h"
/**
 * _strcpy - copies a string from src to dest
 * @dest: is the first char with a pointer
 * @src: - is the second char with a pointer
 * Return: the pointer to *dest
 */

char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (src[c])
{
	dest[c] = src[c];
	c++;
}
	return (dest);
}
