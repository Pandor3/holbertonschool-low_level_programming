#include "main.h"
/**
 * _strpbrk - function which searches for a set of bytes
 * @s: pointer to  hello, world!
 * @accept: pointer to  world
 * Return: s or NULL
 */


char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int l = 0;

	while (accept[l])
	l++;

	while (*s)
{
	for (i = 0; i < l; i++)
{
	if (*s == accept[i])
{
	return (s);
}
}
	s++;
}

	return ('\0');
}
