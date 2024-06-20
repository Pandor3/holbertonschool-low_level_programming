#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10x times
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
char n;
int chiffre;

for (chiffre = 0; chiffre <= 9; chiffre++)
{
	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
_putchar('\n');
}
}
