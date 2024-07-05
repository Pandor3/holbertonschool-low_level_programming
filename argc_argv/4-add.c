#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function which adds positive numbers
 * @argc: counts characters
 * @argv: counts strings
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int i;
	int l;
	int sum = 0;

	if (argc < 1)
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (l = 0; argv[i][l]; l++)
		{

		if (argv[i][l] < '0' || argv[i][l] > '9')
		{
			printf("Error\n");
			return (1);
		}

		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
