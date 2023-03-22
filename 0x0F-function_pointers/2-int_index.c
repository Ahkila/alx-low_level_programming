#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array to search
 * @size: size of array searched
 * @cmp: pointer used in comparing function
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array && cmp)
	{
		for (b = 0; b < size; b++)
		{
			if (cmp(array[b]) != 0)
				return (b);
		}
	}
	return (-1);
}
