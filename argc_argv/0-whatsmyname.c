#include <stdio.h>
/**
 * main - function which prints a file name
 * @argc: counts arguments
 * @argv: counts strings
 * Return: Name of the file or 0
 */


int main(int argc, char *argv[])
{
	int count;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
	{
		printf("argv[%d] = %s\n", count, argv[count]);
	}
	}
	else
	{
		return (0);
	}

		return (0);
}
