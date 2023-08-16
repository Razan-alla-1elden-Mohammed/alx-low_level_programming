#include "main.h"
/**
 * print_alphabet_x10 - Function that will print the alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
int num;
char letters;
for (num = 1; num <= 10; num++)
{
	for (letters = 'a'; letters <= 'z'; letters++)
		_putchar(letters);
_putchar('\n');
}
}
