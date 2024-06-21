#include "main.h"
/**
 * jack_bauer - prints every minute of jack bauer 's day
 * start from 00:00 to 23:59
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int j;
	int a;
	int c;
	int k;

	for (j = '0'; j <= '2'; j++)
{
	for (a = '0'; a <= '9'; a++)
{
	if ((j <= '1' && a <= '9') || (j == '2' && a == '3'))
{
	for (c = '0'; c <= '5'; c++)
{
	for (k = '0'; k <= '9'; k++)
{
	_putchar(j);
	_putchar(a);
	_putchar(':');
	_putchar(c);
	_putchar(k);
	_putchar('\n');
}
}
}
}
}
}
