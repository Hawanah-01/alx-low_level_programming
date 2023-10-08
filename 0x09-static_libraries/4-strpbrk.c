#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strpbrk - a function
 * @s: a parameter
 * @accept: a parameter
 *
 * Return: values
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
