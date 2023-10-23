#include <stdlib.h>
#include <stdio.h>

/**
  * ft_strlen - Returns the length of a string
  * @str: String to count
  *
  * Return: String length
  */

int ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of @s2 to add to @s1 to be a new string
 *
 * Return: new string followed by the first @n bytes
 *         of string 2 @s2 or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, x, z1, z2;
	char *str;

	i = 0;
	x = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	z1 = ft_strlen(s1);
	z2 = ft_strlen(s2);

	if (n >= z2)
		n = z2;
	str = malloc((z1 + n) * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (x < n && s2[x] != '\0')
	{
		str[i] = s2[x];
		i++;
		x++;
	}
	str[i] = '\0';
	return (str);
}
