#include "function_pointers.h"

/**
 * array_iterator - function which executes a function in an array
 * @array: array
 * @size: size of array
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	while (i < size)
	{
		action(* array);
		array++;
		i++;
	}
	if (array[i] <= 0)
		return;
	if (size <= 0)
		return;
	if (action == 0)
		return;

}
