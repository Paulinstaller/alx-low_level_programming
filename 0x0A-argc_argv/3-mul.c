#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiplies two number
 * @argc: counter
 * @argv: vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int sum1, sum2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	sum1 = atoi(argv[1]);
	sum2 = atoi(argv[2]);
	result = sum1 * sum2;

	printf("%d\n", result);

	return (0);
}
