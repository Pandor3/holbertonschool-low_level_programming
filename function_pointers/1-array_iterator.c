#include "function_pointers.h"

/**
 * array_iterator - function which executes a function in an array
 * @array: array
 * @size: size of array
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	while (size < array)
	{
		size++;
		action(array);
	}
	if (size > array)
	{
		return;
	}
	if (action == 0)
	{
		return;
	}
}
