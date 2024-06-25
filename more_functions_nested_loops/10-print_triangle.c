#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: is the integer
 */

void print_triangle(int size)
{
	int e;
	int h;
	int l;

	if (size > 0)
{
	for (l = 0; l < size; l++)
{
	for (e = 1; e < (size - l); e++)
{
	_putchar (' ');
}
	for (h = 0; h <= (size - e); h++)
{
	_putchar('#');
}
	_putchar('\n');
}
}

	else

	_putchar('\n');
}

