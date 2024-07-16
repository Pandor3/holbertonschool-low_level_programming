#include "variadic_functions.h"

/**
 * sum_them_all - function which returns the sum of parameters
 * @n: sum of parameters
 * Return: 0 or result
 */

int sum_them_all(const unsigned int n, ...)
{
	int result = 0;

	if (n == 0)
		return (0);
	va_list list;

	va_start(list, n);
	for (unsigned int i = 0; i < n; i++)
	{
		result += va_arg(list, int);
	}
	va_end(list);
	return (result);
}
