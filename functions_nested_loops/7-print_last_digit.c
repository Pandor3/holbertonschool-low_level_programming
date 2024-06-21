#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 * @l: the number checked
 * Return: Always 0
 */

int print_last_digit(int l)
{
	int last_digit = l % 10;

	if (last_digit < 0)
	last_digit *= -1;
	_putchar(last_digit + '0');

	return (last_digit);
}
