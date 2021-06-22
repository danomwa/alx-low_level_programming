#include "holberton.h"

/**
 * _islower - return 1 if c is lowercase, 0 if not
 * @c: integer to be tested
 * Return: 1 or 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
