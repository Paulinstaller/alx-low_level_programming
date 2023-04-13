#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* strtow - a function that splits a string into words
* @str: string to be split
* Return: pointer to an array of strings (words) or null
**/

char **strtow(char *str)
{
	int x, y, z = 0, l, m, count = 0, len;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		if (str[x] != ' ' && (str[x + 1] == ' ' || str[x + 1] == '\0'))
			count++;
	if (count == 0)
		return (NULL);
	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
	{
		free(words);
		return (NULL);
	}
	for (x = 0; str[x] != '\0' &&  z < count; x++)
	{
		if (str[x] != ' ')
		{
			len = 0;
			for (y = x; str[y] != ' ' && str[y] != '\0'; y++)
				len++;
			words[z] = malloc((len + 1) * sizeof(char));
			if (words[z] == NULL)
			{
				for (m = 0; m < z; m++)
					free(words[z]);
				free(words);
				return (NULL);
			}
			for (l = 0; l < len; l++, x++)
				words[z][l] = str[x];
			words[z][l] = '\0', z++;
		}
	}
	words[z] = NULL;
	return (words);
}
