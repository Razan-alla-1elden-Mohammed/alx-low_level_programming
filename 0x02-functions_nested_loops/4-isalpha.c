#include "main.h"
/**
 *  _isalpha - Function to print a letter.
 *
 * @c: the character of the parameter.
 *
 * Return: 1 for alphabetic character or 0 for anything else.
 */

int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (lower == c || upper == c)
			{
				letter = 1;
			}

		}
	}
	return (letter);
}
