#include "main.h"
/**
*_isupper detects if alphabet is in upper case or not
*
*Return: (1) for true and (0) for false
*
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);

}
