#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 *
 * @nmemb: memory to be filled
 * @size: byte size of each array
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int h;
	char *bob;

	if (nmemb == 0 || size == 0)
		return (NULL);
	bob = malloc(nmemb * size);
	if (bob == NULL)
		return (bob);
	for (h = 0; h < (nmemb * size); h++)
		bob[h] = 0;
	return (bob);
}
