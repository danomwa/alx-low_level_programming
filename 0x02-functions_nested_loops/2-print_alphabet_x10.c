#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_puchar(c);
		}
		_putchar('\n');
	}
}