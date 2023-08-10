#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: lower end of values
 * @max: upper end
 *
 * Return: int *
 */

int *array_range(int min, int max)
{
	int *p;
	int idx, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	p = malloc(len * sizeof(int));
	if (!p)
		return (NULL);

	for (idx = 0; idx < len; idx++)
		p[idx] = min++;

	return (p);
}
