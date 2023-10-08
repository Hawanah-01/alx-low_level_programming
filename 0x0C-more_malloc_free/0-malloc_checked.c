#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function
 * @b: a parameter
 *
 * Return: values
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
