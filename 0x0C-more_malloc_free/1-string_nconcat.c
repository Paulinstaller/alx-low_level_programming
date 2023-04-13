#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from 2nd string to concatenate to 1st string
 *
 * Return: If the function fails - NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int e = 0, f = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		t = malloc(sizeof(char) * (len1 + n + 1));
	else
		t = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!t)
		return (NULL);

	while (e < len1)
	{
		t[e] = s1[e];
		e++;
	}

	while (n < len2 && e < (len1 + n))
		t[e++] = s2[f++];

	while (n >= len2 && e < (len1 + len2))
		t[e++] = s2[f++];

	t[e] = '\0';

	return (t);
}
