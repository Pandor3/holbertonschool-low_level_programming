#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct formule - structure made for the print_all exercise
 * @f: pointer for the function used in the print_all exercise
 */

typedef struct formule
{
	char *check
	void (*f)(va_list arg);
} forme;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void letter(va_list arg);
void number(va_list arg);
void virgule(va_list arg);
void str(va_list arg);

#endif
