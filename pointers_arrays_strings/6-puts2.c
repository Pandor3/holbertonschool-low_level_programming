#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - prints every other character of a string
 * @str: is the pointer
 */

void puts2(char *str)
{
	int n;

	while (n < _strlen(str))
{
	_putchar(str[n]);
	n = n + 2;
}
	_putchar('\n');
}
