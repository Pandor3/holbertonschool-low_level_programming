#include "main.h"

/**
 * set_bit - function which will add a bit with a value of 1
 * @n: pointer of a chosen variable
 * @index: position chosen for the bit
 * Return: -1 or 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned long int b;

	i = sizeof(*n) * 8 - 1;
	if (index > i)
		return (-1);

	b = 1 << index;

	*n = b | *n;

	return (1);
}
