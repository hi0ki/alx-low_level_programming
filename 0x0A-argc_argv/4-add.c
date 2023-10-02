#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector for values
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int i, j, res;

	res = 0;
	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			if (argv[j][i] < 47 || argv[j][i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		res = res + atoi(argv[j]);
		j++;
	}
	printf("%d\n", res);
	return (0);
}
