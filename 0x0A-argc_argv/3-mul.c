#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers arguments
 * @argc: argument count
 * @argv: Argument vector for values
 * Return: if the program doesn't multiplies return 1
 */

int main(int argc, char **argv)
{
	if (argc > 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
