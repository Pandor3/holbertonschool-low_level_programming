#include "main.h"
/**
 * _islower - checks if character is lowercase
 * @c: character to be verified
 * Return: Always 0 or 1
 */

int _islower(int c)
{

if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
