#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated
 *           space in memory, which contains a copy of the string
 *           given as a parameter.
 * @str: string to be copied.
 * Return: null (error) ,pointer to copied string
 */
char *_strdup(char *str)
{
	char *hun;
	int m, len;

	if (str == NULL)
		return (NULL);
	for (m = 0; str[m]; m++)
		len++;
	hun = malloc(sizeof(char) * (len + 1));
	if (hun == NULL)
		return (NULL);
	for (m = 0; str[m]; m++)
	{
		hun[m] = str[m];
	}
	hun[len] = '\0';
	return (hun);
}
