#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: is the integer
 * Return: the value of c
 */

int _strlen(char *s)
{
	int c;

	while (c <= *s)
{
	c++;
}
	return (c);
}
