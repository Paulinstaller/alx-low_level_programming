#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: another string
 * Return: null on failure, ora pointer the newly-allocated
 *         space in memory containing the concat strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int o, p;
	int len1 = 0, len2 = 0;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}


	concat_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (o = 0; o < len1; o++)
		concat_str[o] = s1[o];
	for (p = 0; p < len2; p++)
		concat_str[len1 + p] = s2[p];

	concat_str[len1 + len2] = '\0';
	return (concat_str);
}
