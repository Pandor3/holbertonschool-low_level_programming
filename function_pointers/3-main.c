#include "function_pointers.h"

/**
 * main - main function
 * Return: an int
 */

int main(void)
{
	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] != op_t->op)
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[1] == 0 || argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
