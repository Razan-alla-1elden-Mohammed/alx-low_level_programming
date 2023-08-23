#include "main.h"
/**
 * char *_strcpy - funtion to print.
 * @src: the string.
 * @dest: the para.
 * Retrun: value.
 */

char *_strcpy(char *dest, char *src)
{
int n = -1;

do {
n++;
dest[n] = src[n];
} while (src[n] != '\0');

return (dest);
}
