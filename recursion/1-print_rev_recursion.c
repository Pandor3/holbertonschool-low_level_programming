#include "main.h"
/**
 * _print_rev_recursion - reverse and print a string
 * @s: pointer to the string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
{
	_putchar('\n');
		return;
}
	_putchar(*s);
	_print_rev_recursion(s - 1);
}
