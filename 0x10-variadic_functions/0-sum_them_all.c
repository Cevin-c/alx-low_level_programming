#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - check the code for Holberton School students.
 * @n: number of arguments
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int d;

	va_start(valist, n);

	for (d = 0; d < n; d++)
	{
		sum += va_arg(valist, int);
	}

	va_end(valist);

	return (sum);
}
