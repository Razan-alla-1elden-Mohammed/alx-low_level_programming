#include "main.h"

/**
 * rev_string - function.
 * @s: the para.
 */

void rev_string(char *s)
{
	char string = s[0];
	int num = 0;
	int n;

	while (s[num] != '\0')
		num++;
	for (n = 0; n < num; n++)
	{
		num--;
		string = s[n];
		s[n] = s[num];
		s[num] = string;
	}
}
