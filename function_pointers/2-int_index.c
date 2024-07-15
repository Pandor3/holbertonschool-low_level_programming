#include "function_pointers.h"

/**
 * int_index - function which searches for an integer
 * @array: array
 * @size: number of elements
 * @cmp: pointeur de fonction
 * Return: -1, i or 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int result;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == 0)
	{
		return (-1);
	}
	if (cmp == 0)
	{
		return (-1);
	}
	while (i <= size)
	{
		result = cmp(*array);
	if (result != 0)
	{
		break;
	}
	if (i == size)
	{
		return (-1);
	}
		i++;
		array++;
	}
	return (i);
}
