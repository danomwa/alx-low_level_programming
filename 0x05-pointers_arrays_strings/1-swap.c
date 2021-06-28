#include "holberton.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first pointer
 * @b: second pointer
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
