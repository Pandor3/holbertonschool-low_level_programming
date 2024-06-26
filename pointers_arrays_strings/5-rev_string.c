#include "main.h"
/**
 * rev_string - a function which reverses a string
 * @s: is the character
 */

void rev_string(char *s)
{
	int A;
	int E;
	int I = 0;
	char t;

	for (A = 0; s[A] != '\0'; A++)
{
}
	I = A - 1;

	for (E = 0; E <= I; E++, I--)
{
	t = s[E];
	s[E] = s[I];
	s[I] = t;
}
}
