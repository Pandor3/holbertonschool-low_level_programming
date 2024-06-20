#include "main.h"
/**
 * print_sign - prints the code
 * @n: the character we're trying to define
 * Return: Always 1, 0 or -1
 */

int print_sign(int n)
	{
	if (n > 48)
{
	return (1);
	_putchar(43);
}
	if (n == 48)
{
	return (0);
	_putchar(48);
}
	if (n < 48)
{
	return (-1);
	_putchar(45);
}
	_putchar('\n');
	return (0);
	}
