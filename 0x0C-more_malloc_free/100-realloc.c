#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - a function that reallocates a memory block
 * @ptr: void pointer
 * @old_size: old memory array size
 * @new_size: new memory array size
 *
 * Return: pointer or null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int e;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (e = 0; e < new_size; e++)
			ptr1[e] = old_ptr[e];
	}

	if (new_size > old_size)
	{
		for (e = 0; e < old_size; e++)
			ptr1[e] = old_ptr[e];
	}

	free(ptr);
	return (ptr1);
}
