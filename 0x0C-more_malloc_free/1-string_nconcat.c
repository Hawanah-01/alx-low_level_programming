#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that adds the first (n) characters of s2 to s1
 * @s1: a parameter
 * @s2: a parmeter
 * @n: a parameter
 *
 * Return: values
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{	char *t_out;
	unsigned int b = 0, e = 0, len_1 = 0, t_len = 0, len_2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len_1] != '\0')
		len_1++;

	while (s2[len_2] != '\0' && len_2 < n)
		len_2++;

	t_len = len_1 + n;

	t_out = malloc(t_len + 1);

	if (t_out == NULL)
		return (NULL);

	while (s1[b] != '\0')
	{
		t_out[b] = s1[b];
	}

	while (e < len_2 && s2[e] != '\0')
	{
		t_out[b + e] = s2[e];
		e++;
	}

	t_out[b + e] = '\0';

	return (t_out);

}
