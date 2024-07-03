#include "Main.h"
/**
 * JeSuisRoot - Function for finding root square
 * @n: initial integer
 * @i: value
 * Return: -1 or value
 */

int JeSuisRoot(int n, int i)
{
	if (n < (i * i))
{
	return (-1);
}
	if (n == (i * i))
{
	return (i);
}
	return (JeSuisRoot(n, i + 1));
}

/**
 * _sqrt_recursion - Function which returns square roots
 * @n: initial integer
 * Return: -1 or function JeSuisRoot
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
{
	return (-1);
}
	return (JeSuisRoot(n, 0));
}
