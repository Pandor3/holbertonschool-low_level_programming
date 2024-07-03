#include "Main.h"
/**
 * _pow_recursion - function that returns x ^ y
 * @x: value
 * @y: power of x
 * Return: -1 or x ^ y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
{
	return (-1);
}
	if (y == 0)
{
	return (1);
}
	else
	return (x * _pow_recursion(x, y - 1));
}
