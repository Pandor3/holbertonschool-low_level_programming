#include "main.h"
/**
 * _strspn - prints the length of a prefix substring
 * @s: pointer to the string
 * @accept: second pointer of the prefix
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int l = 0;
	unsigned int r = 0;

	while (accept[l])
	l++;

	while (*s)
{
	for (i = 0; i < l; i++)
{
	if (*s == accept[i])
{
	r++;
	break;
}
}
	s++;

	if (i == l)

	break;
}
	return (r);
}
