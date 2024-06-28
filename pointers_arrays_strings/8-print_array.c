#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the values of arrays
 * @a: is an integer with a pointer
 * @n: is an integer
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
{
	printf("%d", a[c]);

	if (c < n - 1)
{
	printf(", ");
}
}
	printf("\n");
}
