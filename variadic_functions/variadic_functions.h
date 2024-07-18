#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct forme {
	{"c", letter},
	{"i", number},
	{"f", virgule},
	{"s", str},
}forme;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
char letter(void);
int number(void);
float virgule(void);
char * str(void);

#endif
