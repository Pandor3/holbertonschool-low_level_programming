#include <stdio.h>
#include <stdlib.h>
/**
 * main - function which multiplies 2 numbers
 * @argc: counts characters
 * @argv: count strings
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
