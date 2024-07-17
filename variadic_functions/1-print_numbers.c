#include "variadic_functions.h"

/**
 * print_numbers - function which prints numbers
 * @separator: string printed between numbers
 * @n: number of integers in the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	va_start(list, n);
	while (i < n)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	va_end(list);
	printf("\n");
}
