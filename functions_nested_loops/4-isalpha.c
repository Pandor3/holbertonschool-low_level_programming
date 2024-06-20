#include "main.h"
/**
 * _isalpha - checks if a character is in the alphabet
 * @c: is the character to verify
 * Return: Always 1 or 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
{
	return (1);
}
	if (c >= 97  && c <= 122)
{
	return (1);
}
	else
{
	return (0);
}
}
