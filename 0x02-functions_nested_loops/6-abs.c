#include "main.h"
/**
 * _abs - function.
 *
 * @c: the number to be computed.
 *
 * Return: Absolute value of number.
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
