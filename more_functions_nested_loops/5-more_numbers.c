#include "main.h"
/**
 * more_numbers - prints numbers 10 times
 * Return: Always 0
 */

void more_numbers(void)
{
	int n;
	int f;

	for (f = 0; f <= 9; f++)
{
	for (n = 0; n <= 14; n++)
{
	if (n > 9)
{
	_putchar(n / 10 + '0');
}
	_putchar(n % 10 + '0');

}
	_putchar('\n');
}
}
