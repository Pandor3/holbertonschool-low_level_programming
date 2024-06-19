#include <stdio.h>
/**
 * main - is the entry point
 * Return: Always 0
 */

int main(void)
{
	char l;
	char m;

	for (l = '0'; l <= '9'; l++)
{
	putchar(l);
}
	for (m = 'a'; m <= 'f'; m++)
{
	putchar(m);
}

	putchar('\n');

	return (0);
}

