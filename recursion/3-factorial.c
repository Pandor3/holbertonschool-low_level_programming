#include "Main.h"
/**
 * factorial - function which returns a factorial of a number
 * @n: integer related to the chosen number
 * Return: -1 or factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
{
	return (-1);
}
	if (n == 0)
{
	return (1);
}
	else
	return (n * factorial(n - 1));
}
