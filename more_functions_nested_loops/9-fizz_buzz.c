#include "main.h"
#include <stdio.h>
/**
 * main - is the entry point
 * Return: Always 0
 */

int main(void)
{
	int n;
	char F[] = "Fizz";
	char B[] = "Buzz";
	char FB[] = "FizzBuzz";

	for (n = 0; n <= 100; n++)
{
	if (n == 100)

	printf("%s ", B);
	else if ((n % 3 == 0) && (n % 5 == 0))
	printf("%s ", FB);
	else if (n % 3 == 0)
	printf("%s ", F);
	else if (n % 5 == 0)
	printf("%s ", B);
	else

	printf("%d ", n);
}
{
	printf("\n");
	return (0);
}
}
