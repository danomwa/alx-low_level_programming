#include "holberton.h"

/**
 * _strlen - return the length of a str
 * @s: string
 * Return: length of a str
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
