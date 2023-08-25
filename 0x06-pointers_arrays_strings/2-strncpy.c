#include "main.h"

/**
 * *_strncpy - function.
 * @dest: para.
 * @src: para.
 * @n: para3.
 * Return: the pointer to string @dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int rm;

	for (rm = 0; rm < n && src[rm] != '\0'; rm++)
		dest[rm] = src[rm];

	while (rm < n)
	{
	  dest[rm] = '\0';
	  rm++;
	}
	return (dest);
}

