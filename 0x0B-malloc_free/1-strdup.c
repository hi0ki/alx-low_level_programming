#include <stdlib.h>

/**
 * *_strdup - a function that duplicates a string
 *
 * @str: input string to duplicate
 *
 * Return: NULL if str == NULL
 *         @str
*/

char *_strdup(char *str)
{
	char *dest;
	int i = 0;
	int x = 0;

	if (str == NULL)
		return (NULL);
	while (str[x] != '\0')
		x++;
	dest = (char *)malloc(x * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	while (i <= x + 1)
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
}
