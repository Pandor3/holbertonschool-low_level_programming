#include "main.h"
/**
 * print_sign - prints the code
 * @n: the character we're trying to define
 * Return: Always 1, 0 or -1
 */

int print_sign(int n)
	{
	if (n > 0)
{
	return (1);
	_putchar('+');
}
	if (n == 0)
{
	return (0);
	_putchar(0);
}
	if (n < 0)
{
	return (-1);
	_putchar('-');
}
	_putchar('\n');
	return (0);
	}
