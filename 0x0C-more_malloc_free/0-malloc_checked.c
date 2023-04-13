#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: size in bytes.
 *
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *bob = malloc(b);

	if (bob == NULL)
		exit(98);

	return (bob);
}
