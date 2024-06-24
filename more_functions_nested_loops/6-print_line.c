#include "main.h"
/**
 * print_line - print a straight line in the terminal
 * @n: is the integer
 * Return: Always 0
 */

void print_line(int n)
{
	int z;

	if ((n >= 0) || (n == -10))
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
	_putchar('\n');
}
