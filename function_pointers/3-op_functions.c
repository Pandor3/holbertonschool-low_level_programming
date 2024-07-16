#include "function_pointers.h"

/**
 * op_add - function which returns the sum of a & b
 * @a: 1st integer
 * @b: 2nd integer
 * Return: result
 */

int op_add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}

/**
 * op_sub - function which returns the difference of a & b
 * @a: 1st integer
 * @b: 2nd integer
 * Return: result
 */

int op_sub(int a, int b)
{
	int result;

	result = a - b;
	return (result);
}

/**
 * op_mul - function which returns the product of a & b
 * @a: 1st integer
 * @b: 2nd integer
 * Return: result
 */

int op_mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}

/**
 * op_div - function which returns the result of a division between a & b
 * @a: 1st integer
 * @b: 2nd integer
 * Return: result
 */

int op_div(int a, int b)
{
	int result;

	result = a / b;
	return (result);
}

/**
 * op_mod - function which returns the remainder of the division of a & b
 * @a: 1st integer
 * @b: 2nd integer
 * Return: result
 */

int op_mod(int a, int b)
{
	int result;

	result = a % b;
	return (result);
}
