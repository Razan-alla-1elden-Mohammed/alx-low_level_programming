#include "main.h"

/**
 * positive_or_negative - function
 *
 * @n: false or true validation
 *
 * Return: (0)(success)
*/

int positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%i is positive\n", n);
	return (0);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	return (0);
	}
	else
	{
		printf("%i is negative\n", n);
	return (0);
	}
}
