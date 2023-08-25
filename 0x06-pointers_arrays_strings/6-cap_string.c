#include "main.h"

/**
 * *cap_string - function.
 * @str: para.
 * Return: str.
 */

char *cap_string(char *str)
{
int rm = 0;

while (str[rm])
{
while (!(str[rm] >= 97 && str[rm] <= 122))
rm++;
if (str[rm - 1] == ' ' ||
str[rm - 1] == ' ' ||
str[rm - 1] == '\t' ||
str[rm - 1] == '\n' ||
str[rm - 1] == ',' ||
str[rm - 1] == ';' ||
str[rm - 1] == '.' ||
str[rm - 1] == '!' ||
str[rm - 1] == '?' ||
str[rm - 1] == '"' ||
str[rm - 1] == '(' ||
str[rm - 1] == ')' ||
str[rm - 1] == '{' ||
str[rm - 1] == '}' ||
rm == 0)
str[rm] -= 32;
rm++;
	}
return (str);
}

