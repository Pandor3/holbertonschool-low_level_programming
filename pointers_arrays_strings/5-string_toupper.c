#include "main.h"
/**
 * string_toupper - function which convert all lowercases letters by uppercases
 * @str: pointer to *
 * Return: A to Z
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] >= 'a' && str[i] <= 'z')
{
	str[i] = str[i] - 32;
}
	return (str);
}
