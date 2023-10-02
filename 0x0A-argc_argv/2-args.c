#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments
 * @argc: argument count
 * @argv: Argument vector for values
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int j;

	j = 0;
	while(j < argc)
	{
		printf("%s\n", argv[j]);
		j++;
	}
	return (0);
}
