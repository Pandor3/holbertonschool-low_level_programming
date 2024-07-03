#include "Main.h"
/**
 * _puts_recursion - Function which prints a string in recursive
 * @s: pointer of the character string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
{
		_putchar('\n');
		return;
}
	_putchar(*s);
	_puts_recursion(s + 1);
}
