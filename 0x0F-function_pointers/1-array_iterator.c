#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array
 * @array: array
 * @size: size of the array
 * @action: A pointer to the function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (!array || !action)
		return;

	for (k = 0; k < size; k++)
		action(array[k]);
}
