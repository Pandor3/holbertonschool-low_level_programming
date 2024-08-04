#include "main.h"

/**
 * print_binary - function which will print the binary of a number
 * @n: number chosen
 */

void print_binary(unsigned long int n)
{
	int i = sizeof(unsigned long int) * 8 - 1;
	int start = 0;

	while (i >= 0)
	{
		if ((n & (1UL << i)) != 0)
		{
			_putchar('1');
			start = 1;
		}
		else if (start)
		{
			_putchar('0');
		}
		i--;
	}
	if (!start)
	{
		_putchar('0');
	}
}
