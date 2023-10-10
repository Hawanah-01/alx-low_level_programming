#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers and returns NULL if malloc fails
 * @min: minimum value
 * @max: maximum value
 *
 * Return: values
 */
int *array_range(int min, int max)
{
	int *q;
	int i;

	if (min > max)
		return (NULL);

	aq = malloc(sizeof(*ar) * ((max - min) + 1));

	if (q == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		q[i] = min;

	return (q);
}
