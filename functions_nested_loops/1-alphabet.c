#include "main.h"

/**
 * print_alphabet - uses the for function to print the alphabet
 * Return: Always 0
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
