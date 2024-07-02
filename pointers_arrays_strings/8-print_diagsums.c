#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Function which prints the sum of two diagonals
 * @a: pointer to *c3 & *c5
 * @size: arrays
 */

void print_diagsums(int *a, int size)
{
	int r1 = 0;
	int r2 = 0;
	int i;

	for (i = 0; i < size; i++)
{
	r1 += a[i * size + i];
}
	for (i = 0; i < size; i++)
{
	r2 += a[i * size + (size - 1 - i)];
}
	printf("%d, %d\n", r1, r2);
}
