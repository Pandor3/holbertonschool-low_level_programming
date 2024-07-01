#include "main.h"
/**
 * _strchr - A function which locates a character
 * @s: pointer to the string
 * @c: the character to locate
 * Return: Always NULL or c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
{
	if (*s == c)
{
	return (s);
}
	s++;

	if (c == '\0')
{
	return (s);
}
}
	return ('\0');

}
