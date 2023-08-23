#include "main.h"

/**
 * puts2 - function.
 * @str: the para.
 */

void puts2(char *str)
{
	int string = 0;
	int m = 0;
	char *ptr = str;
	int n;


	while (*ptr != '\0')
	{
		ptr++;
		string++;
	}
	m = string - 1;
	for (n = 0; n <= m; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
