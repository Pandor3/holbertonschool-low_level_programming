#include "main.h"
/**
 * rev_string - a function which reverses a string
 * @s: is the character
 */

void rev_string(char *s)
{
	int a;

	int b;

	for (a = '0'; s[a] != '\0'; a++)
{
	_putchar(s[a]);
	_putchar('\n');
}
	for (b = 9 - 1; b > '\0'; b--)
{
	_putchar(s[b]);
}
	_putchar('\n');
}
