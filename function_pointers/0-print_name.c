#include "function_pointers.h"

/**
 * print_name - function which prints a name
 * @name: pointer to main
 * @f: pointer to main
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == 0)
	{
		return;
	}
	if (name == 0)
	{
		return;
	}
	f(name);
}
