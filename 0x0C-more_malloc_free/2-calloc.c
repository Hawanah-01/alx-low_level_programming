#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory to an array
 * @nmemb: first parameter
 * @size: second parameter
 *
 * Return: values
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *msuc;
	unsigned int y = 0;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = nmemb * size;

	msuc = malloc(b);

	if (msuc == NULL)
		return (NULL);
	for (y = 0; y < b; b++)
		msuc[y] = 0;

	return (msuc);
}
