#include "Main.h"
/**
 * _print_rev_recursion - reverse and print a string
 * @s: pointer to the string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
}
