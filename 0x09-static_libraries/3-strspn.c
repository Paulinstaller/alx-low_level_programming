#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: Always 0 (sucess)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int w = 0;
	int g;

	while (*s)
	{
		for (g = 0; accept[g]; g++)
		{
			if (*s == accept[g])
			{
				w++;
				break;
			}
			else if (accept[g + 1] == '\0')
				return (w);
		}
		s++;
	}
	return (w);
}
