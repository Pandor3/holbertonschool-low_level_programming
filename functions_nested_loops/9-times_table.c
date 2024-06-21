#include "main.h"
/**
 * times_table - Print the 9 times table
 */

void times_table(void)
{
	int a;
	int b;
	int P;

	for (a = 0; a <= 9; a++)
{
	for (b = 0; b <= 9; b++)
{
	P = a * b;
	if (b != 0)
{
	_putchar(',');
	_putchar(' ');

	if (P < 10)

	_putchar(' ');
}
	if (P > 9)
{
	_putchar((P / 10) + '0');
	_putchar((P % 10) + '0');
}
	else
{
	_putchar(P + '0');

}
}
	_putchar ('\n');
}
}
