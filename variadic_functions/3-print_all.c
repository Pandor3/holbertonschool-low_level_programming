#include "variadic_functions.h"

/**
 * print_all - function which prints anything
 * @format: a list of types of arguments
 */

void print_all(const char * const format, ...)
{
	forme *tab;
	int i = 0;


	while (forme[i].op != NULL)
	{
		if (*(tab[i].op) == format && format[1] == '\0')
			return (forme[i].f);
	}
}
	

/**
 * letter - function which prints a char
 */
char op_letter(void)
{
	printf("%c");
}

/**
 * number - function which prints an int
 */
int op_number(void)
{
	printf("%d");
}

/**
 * virgule - function which prints a float
 */
float op_virgule(void)
{
	printf("%f");
}

/**
 * str - function which prints a string of characters
 */
char * op_str(void)
{
	printf("%s");
}
