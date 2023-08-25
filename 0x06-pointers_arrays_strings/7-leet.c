#include "main.h"

/**
 * *leet - function.
 * @s: para.
 * Return: s.
 */

char *leet(char *s)
{
int rm, mr;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (rm = 0; s[rm] != '\0'; rm++)
{
for (mr = 0; mr < 10; mr++)
{
if (s[rm] == s1[mr])
{
s[rm] = s2[mr];
}
}
}
return (s);
}

