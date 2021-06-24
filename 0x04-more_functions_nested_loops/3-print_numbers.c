#include "holberton.h"

/**
 * print_numbers - This function will print the numbers from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
		_putchar((num % 10) + '0');

	_putchar('\n');
}
