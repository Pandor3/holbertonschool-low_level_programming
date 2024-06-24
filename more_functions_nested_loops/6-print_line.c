#include "main.h"
/**
 * print_line - print a straight line in the terminal
 * @n: is the integer
 * Return: Always 0
 */

void print_line(int n)
{
	int z;

	if (n >= 0)
	{
		for (z = 1; z <= n; z++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
	if (n < 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
