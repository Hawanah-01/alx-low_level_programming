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
	unsigned int i = 0, len_1 = 0, t_len = 0, len_2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	for (len_1 = 0; s1[len_1] != '\0'; len_1++)
		;

	for (len_2 = 0; s2[len_2] != '\0'; len_2++)
		;

	if (n > len_2)
		n = len_2;

	t_len = len_1 + n;

	t_out = malloc(t_len + 1);

	if (t_out == NULL)
		return (NULL);

	for (i = 0; i < t_len; i++)
		if (i < len_1)
			t_out[i] = s1[i];
		else
			t_out[i] = s2[i - len_1];

	t_out[i] = '\0';

	return (t_out);

}
