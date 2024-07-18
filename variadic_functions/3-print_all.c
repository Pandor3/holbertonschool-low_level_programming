#include "variadic_functions.h"

/**
 * letter - function which prints a char
 */
void op_letter(void)
{
	printf("%c");
}

/**
 * number - function which prints an int
 */
void op_number(void)
{
	printf("%d");
}

/**
 * virgule - function which prints a float
 */
void op_virgule(void)
{
	printf("%f");
}

/**
 * str - function which prints a string of characters
 */
void  op_str(void)
{
	printf("%s");
}

void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char * s;
	char * p = 0;

	forme list {
	{"c", op_letter},
	{"i", op_number},
	{"f", op_virgule},
	{"s", op_str},
	{NULL, NULL}
	};
	
	while (format[p] != NULL)
	{

