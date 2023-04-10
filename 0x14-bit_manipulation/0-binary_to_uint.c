#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b - a string of binary numbers
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	unsigned int c = 0;

	if (!b)
		return (0);
	while (b[a])
	{
		if (b[a] == '0' || b[a] == '1')
		{
			c <<= 1;
			c += b[a] - '0';
			a++;
		}
		else
			return (0);
	}
	return (c);
}
