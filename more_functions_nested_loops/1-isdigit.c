#include "main.h"
/**
 * _isdigit - checks for digit
 * @c: is the integer
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
{
	return (1);
}
	else
{
	return (0);
}
}
