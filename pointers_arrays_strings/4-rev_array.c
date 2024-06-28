#include "main.h"
/**
 * reverse_array - function which reverses the content an array with integers
 * @a: pointer to the array
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int d = 0;
	int f = n - 1;
	int t;

	while (d < f)
{
	t = a[d];
	a[d] = a[f];
	a[f] = t;

	f--;
	d++;
}
}
