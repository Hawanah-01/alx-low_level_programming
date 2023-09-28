
#include "main.h"

/**
 * check_sqrt - checks for the square root
 * @p: first integer variable
 * @q: second integer variable
 *
 * Return: int
 */
int check_sqrt(int p, int q)
{
	if (p * p == q)
		return (p);
			if (p * p > q)
				return (-1);
	return (check_sqrt(p + 1, q));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find square root of values
 *
 * Return: natural square root or -1 if error is present
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_sqrt(1, n));
}
