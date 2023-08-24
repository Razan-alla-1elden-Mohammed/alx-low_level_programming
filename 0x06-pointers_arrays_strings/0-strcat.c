#include "main.h"

/**
 * *_strcat - function.
 * @dest: the first parameter.
 * @src: the second parameter.
 * Return: pointer to string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int r;
	int m;

	r = 0;
	while (dest[r] != '\0')
	{
		r++
	}
	m = 0;
	while (src[m] != '\0')
	{
		dest[r] = src[m];
		r++;
		m++;
	}
	dest[r] = '\0';
	return (dest);
}
