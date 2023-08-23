#include "main.h"

/**
 * swap_int - function.
 * @a: character.
 * @b: character.
 */

void swap_int(int *a, int *b)
{
int swap;

swap = *a;
*a = *b;
*b = swap;
}
