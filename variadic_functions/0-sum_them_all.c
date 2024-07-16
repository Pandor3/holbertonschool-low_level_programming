#include "variadic_functions.h"

/**
 * sum_them_all - function which returns the sum of parameters
 * @n: sum of parameters
 * Return: 0 or result
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int result;

	if (n == 0)
	{
		return (0);
	}
	for (unsigned int i = 0; i < n; i++)
	{
		result += n ;
	}
	return (result);
}
