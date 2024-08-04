#include "main.h"

/**
 * get_bit - function which returns the value of a chosen bit
 * @n: chosen number
 * @index: position of the bit
 * Return: The position and value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	i = sizeof(n) * 8 - 1;

	if (index > i)
		return (-1);

	return (n >> index & 1);
}
