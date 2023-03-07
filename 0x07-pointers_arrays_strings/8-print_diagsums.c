#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: input value
 * @size: input value
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, u;

	sum1 = 0;
	sum2 = 0;

	for (u = 0; u < size; u++)
	{
		sum1 += a[u * size + u];
	}
	for (u = size - 1; u >= 0; u--)
	{
		sum2 += a[u * size + (size - u - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
