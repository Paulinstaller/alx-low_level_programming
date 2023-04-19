#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: counter
 * @argv: vector
 *
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int num = 0;
	int m, n;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (m = 1; m < argc; m++)
	{
		for (n = 0; argv[m][n] != '\0'; n++)
		{
			if (!isdigit(argv[m][n]))
			{
				printf("Error\n");
				return (1);
			}
		}

		num += atoi(argv[m]);
	}
	printf("%d\n", num);
	return (0);
}
