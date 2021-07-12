#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the min num of coins to make change for an amount of money
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
int count = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

