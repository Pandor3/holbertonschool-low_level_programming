#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - is the entry point
 * Return: Always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (0 < n)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}

return (0);
}
