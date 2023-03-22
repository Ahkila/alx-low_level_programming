#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a parameter
 * @array: iterated array
 * @size: size of array iterated
 * @action: pointer to function used
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (!array || !action)
		return;

	for (a = 0; a < size; a++)
		action(array[a]);
}
