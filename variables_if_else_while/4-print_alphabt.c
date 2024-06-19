#include <stdio.h>
/**
 * main - is the entry point
 * Return: Always 0
 */

int main(void)
{
char ch = 'a';
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch == 'e')
{
ch++;
}
if (ch == 'q')
{
ch++;
}
putchar(ch);
}
{
putchar('\n');
}
return (0);
}
