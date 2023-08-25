#include "main.h"

/**
 * *_strncpy - function.
 * @dest: para1.
 * @src: para.
 * @n: para3.
 *
 * Return: the pointer to string @dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
int rm;

rm = 0;
while (rm < n && src[rm] != '\0')
{
dest[rm] = src[rm];
rm++;
}
while (rm < n)
{
dest[rm] = '\0';
rm++;
}
return (dest);
}

