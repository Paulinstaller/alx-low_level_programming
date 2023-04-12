#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 *                and initializes it with a specific char.
 * @size: size of array
 * @c: char to intialize the array with.
 * Return: char pointer, Null if fail
 */
char *create_array(unsigned int size, char c)
{
		char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
