#include "main.h"

/**
*-isdigit detects if there is a digit present or not
*Return: 1 if true and 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
