#include "main.h"

/**
 * binary_to_uint - function which converts binary numbers
 * @b: value of the string of characters
 * Return: 0 or result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		result = result * 2 + (b[i] - '0');
	}
	return (result);
}
