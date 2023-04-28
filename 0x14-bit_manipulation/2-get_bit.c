#include <stdio.h>
#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index in an unsigned long int
 * @n: the number to retrieve the bit from
 * @index: the index of the bit to retrieve
 *
 * Return: value of bit at the given index, or -1 if index is out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
	else
	{
	return ((n >> index) & 1);
	}
}
