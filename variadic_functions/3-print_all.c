#include "variadic_functions.h"

/**
 * op_letter - function which prints a char
 */
void op_letter(void)
{
	printf("%c");
}

/**
 * op_number - function which prints an int
 */
void op_number(void)
{
	printf("%d");
}

/**
 * op_virgule - function which prints a float
 */
void op_virgule(void)
{
	printf("%f");
}

/**
 * op_str - function which prints a string of characters
 */
void  op_str(void)
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
	{"c", op_letter};
	{"i", op_number};
	{"f", op_virgule};
	{"s", op_str};
	{NULL, NULL}
	};

	while (i < format[NULL])
	{
		printf("%d\n", format[i]) ;
		i++;
	}
}
