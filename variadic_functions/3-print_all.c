#include "variadic_functions.h"

/**
 * letter - function which prints a char
 * @arg: arguments
 */
void letter(va_list arg)
{
	char c = va_arg(arg, char);

	printf("%c");
}

/**
 * number - function which prints an int
 * @arg: arguments
 */
void number(va_list arg)
{
	int i = va_arg(arg, int);

	printf("%d");
}

/**
 * virgule - function which prints a float
 * @arg: arguments
 */
void virgule(va_list arg)
{
	float f = va_arg(arg, double);

	printf("%f");
}

/**
 * str - function which prints a string of characters
 * @arg: arguments
 */
void str(va_list arg)
{
	char *s = va_arg(arg, char);

	printf("%s");
}

/**
 * print_all - function which prints everything
 * @format: list of types
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	int z = 0;
	va_list list;

	forme tab[]
	{
		{"c", letter},
		{"i", number},
		{"f", virgule},
		{"s", str},
		{NULL, NULL}
	};

	va_start(arg, format);
	while (format != NULL && format[a] != NULL)
	{
		while (tab[z].check == format[a])
		{
			if (*(tab[z].check) == format[a])
			{
				printf("%s");
				tab[z].f(arg);
			}
			a++;
		}
		z++;
		a = 0;
	}
	printf("\n");
	va_end(arg);
}
