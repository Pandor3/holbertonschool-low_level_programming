#include "variadic_functions.h"

/**
 * letter - function which prints a char
 * @arg: arguments
 */
void letter(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * number - function which prints an int
 * @arg: arguments
 */
void number(va_list arg)
{
	int i = va_arg(arg, int);

	printf("%d", i);
}

/**
 * virgule - function which prints a float
 * @arg: arguments
 */
void virgule(va_list arg)
{
	float f = va_arg(arg, double);

	printf("%f", f);
}

/**
 * str - function which prints a string of characters
 * @arg: arguments
 */
void str(va_list arg)
{
	char *s = va_arg(arg, char*);

	printf("%s", s);
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

	forme tab[] = {
		{"c", letter},
		{"i", number},
		{"f", virgule},
		{"s", str},
		{NULL, NULL}
	};

	va_start(list, format);
	while (format != NULL && format[a] != '\0')
	{
		while (tab[a].check != NULL)
		{
			if (*(tab[a].check) == format[z])
			{
				printf("%s", format);
				tab[a].f(list);
			}
			a++;
		}
		z++;
		a = 0;
	}
	printf("\n");
	va_end(list);
}
