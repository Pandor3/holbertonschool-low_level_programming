#include "main.h"
/**
 * _memcpy - function which copies a memory area
 * @dest: pointer on destination
 * @src: pointer on source
 * @n: bytes
 * Return: Destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}
	return (dest);
}
