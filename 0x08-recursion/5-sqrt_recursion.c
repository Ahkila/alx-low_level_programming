#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number to calculate
 * Return: value
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates natural square root of number
 * @n: number to calculate the square
 * @i: number
 * Return: value of natural sqaure root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
