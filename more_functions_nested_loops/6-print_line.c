#include "main.h"
/**
 * print_line - print a straight line in the terminal
 * @n: is the integer
 * Return: Always 0
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
{
	while (i <= n)
{
	_putchar('_');
	i++;
}
	_putchar('\n');
}
	else
{
	_putchar('\n');
}
}
