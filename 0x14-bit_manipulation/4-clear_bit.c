#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number of b
 * @index: starting from 0 of the bit you want to set
 * Return: 1 on success, or -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	b = ~(1 << index);
	*n = *n & b;

	return (1);
}
