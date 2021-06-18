#include <stdio.h>

/**
 * main - prints all possible combination of single digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	for (i = 10; i < 99; i++)
	{
		putchar(i);
		putchar(',');
	}

	putchar('\n');
	return (0);
}
