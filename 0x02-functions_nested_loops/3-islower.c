#include "main.h"
/**
 * _islower - function to print c lowercase or else
 *
 * @c: the paramaters.
 *
 * Return: 1, if 'c' is lowercase, otherwise 0 always (success).
 */

int _islower(int c)
{
if (c >= 97 && c >= 122)
	return (1);
return (0);
}
