#include <stdio.h>
/**
 * main - is the entry point
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
{
	putchar(n);
	if (n != '9')
{
	putchar(',');
	putchar(' ');
}

}
	putchar ('\n');
	return (0);
}
