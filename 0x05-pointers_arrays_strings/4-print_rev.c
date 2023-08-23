#include "main.h"

/**
 * print_rev - function.
 * @s: the para.
 */

void print_rev(char *s)
{
	int str = 0;
	int m;

	while (*s != '\0')
	{
		str++;
		s++;
	}
	s--;
	for (m = str; m > 0; m--)
	{
		_putchar(*s);
	s--;
	}
	_putchar('\n');
}
