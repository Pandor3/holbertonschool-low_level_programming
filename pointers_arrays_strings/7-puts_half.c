#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: is the pointer
 */

void puts_half(char *str)
{
	int n;
	int l = 0;

while (str[l] != '\0')
{
	l++;
}
	n = (l - 1) / 2;

while (n < l)
{
	n++;
	_putchar(str[n]);
}
	_putchar('\n');
}
