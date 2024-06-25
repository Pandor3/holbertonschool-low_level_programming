#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: is the character
 */

void print_rev(char *s)
{
	int c;

	int v;

	int e;

	c = 0;

	while (s[c] != '\0')
{
	c++;
}

	v = c;

	for (e = v - 1; e >= 0; e--)
{
	_putchar(s[e]);
}
	_putchar('\n');
}
