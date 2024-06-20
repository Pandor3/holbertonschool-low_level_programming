#include "main.h"
/**
 * _isalpha - checks alphabetical characters
 * @c: is the character to be verified
 * Return: Always 1 or 0
 */

int _isalpha(int c)
{
if (c >= 'A' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
