#include "holberton.h"

/**
 * _abs - prints the last digit
 * @n: integer to be tested
 *
 * Return: value of the last digit
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
/**
 * print_last_digit - prints the last digit of a number
 * @n: integer to be tested
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = _abs((n % 10));
	_putchar(lastDigit + 48);
	return (lastDigit);
}
