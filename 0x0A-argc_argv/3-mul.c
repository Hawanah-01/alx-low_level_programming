#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int p, q;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	p = atoi(argv[1]);
	q = atoi(argv[2]);
	printf("%d\n", p * q);

	return (0);
}
