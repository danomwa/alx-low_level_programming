#include <stdio.h>

/**
 * main - prints out all possible combos of 3 digits
 *
 * Return: Always 0
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 48; num1 < 58; num1++)
	{
		for (num2 = num1 + 1; num2 < 58; num2++)
		{
			for (num3 = num2; num3 < 58; num3++)
			{
				if (num1 == num2 || num2 == num3 || num2 == 9)
					continue;

				putchar(num1);
				putchar(num2);
				putchar(num3);

				if (num1 == 55 && num2 == 56 && num3 == 57)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

