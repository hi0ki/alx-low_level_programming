#include <stdlib.h>
#include <stdio.h>

/**
 * ft_strlen - function that counts a string
 *
 * @str: string to be counted
 *
 * Return: return the length
 */

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: input to string 1
 * @s2: input to string 2
 *
 * Return: NULL on faliure
*/

char *str_concat(char *s1, char *s2)
{
	int i, x, y;
	char *dest;

	i = 0;
	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	y = ft_strlen(s1);
	x = ft_strlen(s2);
	dest = (char *)malloc((y + x) * sizeof(char) + 1);

	if (dest == 0)
		return (0);
	while (i <= y + x)
	{
		if (i < y)
			dest[i] = s1[i];
		else
			dest[i] = s2[i - y];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
