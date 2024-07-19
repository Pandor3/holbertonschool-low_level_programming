#include "variadic_functions.h"

/**
 * op_letter - function which prints a char
 */
void letter(void)
{
	printf("%c");
}

/**
 * op_number - function which prints an int
 */
void number(void)
{
	printf("%d");
}

/**
 * op_virgule - function which prints a float
 */
void virgule(void)
{
	printf("%f");
}

/**
 * op_str - function which prints a string of characters
 */
void  str(void)
{
	printf("%s");
}

/**
 * print_all - function which prints everything
 * @format: list of types
 */
void print_all(const char * const format, ...)
{
	int i = 0;

	forme list {
	{"c", letter};
	{"i", number};
	{"f", virgule};
	{"s", str};
	{NULL, NULL}
	};

	while (i < format[NULL])
	{
		printf("%d\n", format[i]) ;
		i++;
	}
}
