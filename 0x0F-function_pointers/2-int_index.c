#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array of integers
 * @size: size of array
 * @cmp: is a pointer a function to compare values
 *
 * Return:  the index of array if success and -1 if failed
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (array && cmp)
	{
	for (; j < size; j++)
	{
		if (cmp(array[j]) != 0)
			return (j);
	}
	}
	return (-1);
}
