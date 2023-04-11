#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int);

	int num_bits = size * 8;

	for (int i = num_bits - 1; i >= 0; i--)
	{
		unsigned long int bit = (n >> i) & 1;

		putchar('%lu', bit);
	}
	putchar('\n');
}
