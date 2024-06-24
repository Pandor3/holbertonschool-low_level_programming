#include "main.h"
/**
 * print_square - print a square
 * @size: is the integer
 * Return: Always 0
 */

void print_square(int size)
{
	int lo;
	int La;

	if (size > 0)
{
	for (lo = 0; lo < size; lo++)
{
	for (La = 0; La < size; La++)
{
	_putchar('#');
}
	_putchar('\n');
}
}
	else
{
	_putchar('\n');
}
}
