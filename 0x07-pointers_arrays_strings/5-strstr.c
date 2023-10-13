/**
 * _strstr - a function that locates a substring
 *
 * @haystack: input string to search for matching
 *            substrings
 * @needle: subtring to search for
 *
 * Return: a pointer to the beginning
 *         of the located substring or
 *         NULL if substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[x] != '\0')
	{
		i = 0;
		while (str[x + i] == to_find[i])
		{
			i++;
			if (to_find[i] == '\0')
				return (str + x);
		}
		x++;
	}
	return (0);
}
