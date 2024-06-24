#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is the integer
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int l;
	int e;

	if (n > 0)
{
	for (l = 0; l < n; l++)
{
	for (e = 0; e < l; e++)
{
	_putchar(' ');
}
	_putchar('\\');
	_putchar('\n');
}
}
	else
{
	_putchar('\n');
}
}
