/**
 * _strpbrk - function locates the first occurrence in the string
 * @s : this is the string to be scanned
 * @accept : this is the string containing the characters
 *
 * * Return: pointer to the bytes in @s
 *         or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int x;

	i = 0;
	while (s[i])
	{
		x = 0;
		while (accept[x])
		{
			if (accept[x] == s[i])
				return (s + i);
			x++;
		}
		i++;
	}
	return ('\0');
}
