#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: checks bits
 * @index: stores bit
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int one, two;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	one = 1 << index;
	two = n & div;
	if (two == one)
		return (1);

	return (0);
}
