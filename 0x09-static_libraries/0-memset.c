#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memset - a function
 * @s: a parameter
 * @b: a parameter
 * @n: a parameter
 *
 * Return: values
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
