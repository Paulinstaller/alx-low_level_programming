#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  a function that returns the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the sum of all its parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int m;
	int sum = 0;
	va_list nums;

	va_start(nums, n);
	for (m = 0; m < n; m++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
