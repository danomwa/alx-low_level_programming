#include "holberton.h"

/**
 * print_numbers - This function will print the numbers from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int number;

	number = 48;
	while (number <= 57)
	{
		_putchar(number);
		number++;
	}
	_putchar('\n');
}
