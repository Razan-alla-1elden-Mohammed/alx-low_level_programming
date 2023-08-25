#include "main.h"

/**
 * *_strncat - function.
 * @dest: the first parameter.
 * @src: the second.
 * @n: third.
 * Return: pointer to string @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int r, m;

	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	m = 0;
	while (m < n && src[m] != '\n')
	{
		dest[r] = src[m];
		r++;
		m++;
	}
	dest[r] = '\0';
	return (dest);
}
