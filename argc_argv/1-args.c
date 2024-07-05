#include <stdio.h>
/**
 * main - prints the number of arguments passed to it
 * main - holds the code for Args
 * @argc: counts arguments
 * @argv: counts strings of characters
 * Return: Always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
