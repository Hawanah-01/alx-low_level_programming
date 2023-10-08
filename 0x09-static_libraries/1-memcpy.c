#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memcpy - a function
 * @n: a parameter
 * @dest: a parameter
 * @src: a parameter
 *
 * Return: values
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
