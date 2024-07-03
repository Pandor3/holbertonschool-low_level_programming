#include "Main.h"
/**
 * _strlen_recursion - function that returns a string in recursion
 * @s: pointer to the string
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
{
	return (0);
}
	else
	return (1 + _strlen_recursion(s + 1));
}
