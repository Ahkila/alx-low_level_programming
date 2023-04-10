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

	for (a = sizeof(unsigned long int) * 8 - 1; a >= 0; a--)
	{
		char c = (n >> a) & 1 ? '1' : '0';

		putchar(c);
	}
	putchar('\n');
}
