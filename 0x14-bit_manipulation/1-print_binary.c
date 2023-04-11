#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
	int a;
	{
	if (a > 1)
		print_binary(a >> 1);

	_putchar((a & 1) + '0');
	}
	_putchar('\n');
}
