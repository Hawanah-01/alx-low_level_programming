#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncpy - a function
 * @src: a parameter
 * @n: a parameter
 * @dest: a parameter
 * Return: values
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
