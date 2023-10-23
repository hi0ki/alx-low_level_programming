#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: amount of bytes
 *
 * Return: pointer to our new allocated memory
 *         exit with 98 if malloc fails
*/

void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b * sizeof(char));
	if (str == NULL)
		return (98);
	return (str);
}
