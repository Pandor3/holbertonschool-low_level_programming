#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: is the integer
 * Return: the value of c
 */

int _strlen(char *s)
{
	int c;

	c = 0;

	while (s[c] != '\0')
{
	c++;
}
	return (c);
}
