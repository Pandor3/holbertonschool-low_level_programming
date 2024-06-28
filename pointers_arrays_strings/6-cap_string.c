#include "main.h"
/**
 * cap_string - function which capitalizes first letters
 * @str: is the string pointer
 * Return: string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
{
	if (str[i] >= a && str[i] <= z)
{
	str[i] = str[i] - 32;
}
}
	return (str);
}
