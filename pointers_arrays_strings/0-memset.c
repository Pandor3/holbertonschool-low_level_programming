#include "main.h"
/**
 * _memset - function which fills the memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: bytes of the memory area
 * Return: return the pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

for (i = 0; i < n; i++)
{
	s[i] = b;
}
	return (s);
}
