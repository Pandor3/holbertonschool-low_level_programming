#include "main.h"
/**
 * _atoi - is a function which converts a string to an integer
 * @s: is the pointer
 * Return: the value of i * n
 */

int _atoi(char *s)
{
	int i = 1;
	unsigned int n = 0;

do {

if (*s == '-')
i *= -1;
else if (*s >= '0' && *s <= '9')
n = (n * 10) + (*s - '0');
else if (n > 0)
break;
}

while (*s++);

return ((n)*(i));
}
