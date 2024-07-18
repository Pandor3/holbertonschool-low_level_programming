#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct forme[] {
	{"c", op_letter},
	{"i", op_number},
	{"f", op_virgule},
	{"s", op_str},
	{NULL, NULL}
}forme;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
char op_letter(void);
int op_number(void);
float op_virgule(void);
char * op_str(void);

#endif
