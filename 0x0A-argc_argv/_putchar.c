#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: printed character
 *
 * Return: 1 when successful or -1 once failed.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
