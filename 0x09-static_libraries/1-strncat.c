#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncat - a function
 * @src: a parameter
 * @dest: a parameter
 * @n: a parameter
 * Return: values
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
