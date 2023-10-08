#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strspn - a function
 * @s: a parameter
 * @accept: a parameter
 *
 * Return: values
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
