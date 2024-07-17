#include "variadic_functions.h"

/**
 * print_strings - function which prints strings
 * @separator: string between strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned char c;
	va_list list;

	va_start(list, n);
	while (c < n)
	{
		printf("%s", va_arg(list, char);
	if (*separator != NULL && c < n - 1);
	printf("%s", *separator);
	}
	va_end(list);
	printf("/n");
}
