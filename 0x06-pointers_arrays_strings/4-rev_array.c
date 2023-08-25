#include "main.h"

/**
 * reverse_array - function.
 * @a: para.
 * @n: para1.
 * Return: n.
 */

void reverse_array(int *a, int n)
{
	int rm;
	int mr;

	for (rm = 0; rm < n--; rm++)
	{
		mr = a[rm];
		a[rm] = a[n];
		a[n] = mr;
	}
}

