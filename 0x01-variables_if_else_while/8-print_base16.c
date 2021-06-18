#include <stdio.h>

/**
 * main - prints the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char lower;
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (lower = 'a'; lower < 'g'; lower++)
		putchar(lower);
	putchar('\n');

	return (0);
}
