#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct forme {
	{"c", f1},
	{"i", f2},
	{"f", f3},
	{"s", f4},
}forme;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
