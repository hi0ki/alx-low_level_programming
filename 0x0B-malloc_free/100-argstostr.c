#include <stdlib.h>

/**
 * argstostr - a function that concatenates
 *             all the arguments
 *
 * @ac: argument counter
 * @av: argument holder
 *
 * Return: a pointer to a new string
 *         or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
	int i, x, y, size;
	char *str;

	i = 0, x = 0;
	if (ac == 0 || av == 0)
		return (NULL);

	size = 0;
	while (i < ac)
	{
		x = 0;
		while (av[i][x] != '\0')
		{
			size++;
			x++;
		}
		size++;
		i++;
	}

	str = malloc(size * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);

	i = 0, y = 0;
	while (i < ac)
	{
		x = 0;
		while (av[i][x] != '\0')
		{
			str[y] = av[i][x];
			x++;
			y++;
		}
		str[y] = '\n';
		y++;
		i++;
	}
	str[y] = '\0';
	return (str);
}
