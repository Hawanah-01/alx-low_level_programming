#include "main.h"
/**
 * _strlen_recursion - checks for the length of string s
 * @s:string
 *
 * Return:int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);

	}
	return (i);
}
