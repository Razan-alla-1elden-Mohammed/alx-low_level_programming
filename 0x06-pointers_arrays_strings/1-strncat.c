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
	while (dest[r])
	{
		r++;
	}
	for (m = 0; m < n && src[m] != '\0'; m++)
	{
		dest[r + m] = src[m];
	}
	dest[r + m] = '\0';
	return (dest);
}

