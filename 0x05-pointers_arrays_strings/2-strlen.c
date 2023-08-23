#include "main.h"

/**
 * _strlen - function that prints the length of a string.
 * @s: character.
 * Return: the lenght.
 */

int _strlen(char *s)
{
int strlen;

for (strlen = 0; *s != '\0'; s++)
{
++strlen;
}
return (strlen);
}
