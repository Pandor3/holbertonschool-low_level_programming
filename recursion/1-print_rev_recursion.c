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
	if ('\0' < *s)
	_putchar('\0');
	_print_rev_recursion(s - 1);
}
