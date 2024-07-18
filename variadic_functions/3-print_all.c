#include "variadic_functions.h"



void print_all(const char * const format, ...)
{




char letter(void)
{
	char a = 65;
	
	if (a >= 126 || a < 65)
		return (NULL);
	while (a < 126)
	{
		printf("%c\n", a)
	}
	return (0);
}

int number(void)
{
	int n = 48;

	if (n > 57 || n < 48)
		return (NULL);
	while (n <= 57)
	{
		printf("%d\n", n)
	}
	return (0);
}

float virgule(void)
{

}

void string(void)
{
	int i = 0;
	
	while (i < '\0')
	{
		i++;
	}
	printf("%s\d", i);
}
