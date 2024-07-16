#include "function_pointers.h"

/**
 * get_op_func - function selects a function and execute it
 * @s: operator character
 * Return: character chosen by s
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (*op_t->ops[i] != NULL)
	{
		if (*op_t->ops[i] == *s)
			return (*op_t->f[i]);
		i++;
	}
		return (NULL);
}
