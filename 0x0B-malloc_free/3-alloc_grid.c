#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 *
 * Return: NULL on failure or pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **bob;
	int m, n;

	if (height <= 0 || width <= 0)
		return (NULL);

	bob = (int **) malloc(sizeof(int *) * height);

	if (bob == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		bob[m] = (int *) malloc(sizeof(int) * width);
		if (bob[m] == NULL)
		{
			free(bob);
			for (n = 0; n <= m; n++)
				free(bob[n]);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
		{
			bob[m][n] = 0;
		}
	}
	return (bob);
}
