#include "main.h"
/**
 * _strcmp - function which compares 2 strings
 * @s1: first pointer
 * @s2: second pointer
 * Return: 0, positive or negative
 */

int _strcmp(char *s1, char *s2)
{

for (; (*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2); s1++, s2++)
{
}
if (*s1 != *s2)
{
return (*s1 - *s2);
}
else
{
return (0);
}

}
