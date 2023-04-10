#include "main.h"

/**
 * _mesmet - fills memory with a constant byte
 * @s: pointer to put constant
 * @b: constant
 * @n: bytes to be changed
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
