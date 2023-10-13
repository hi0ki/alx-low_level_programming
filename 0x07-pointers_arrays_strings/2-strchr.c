/**
 * _strchr - a function that locates a character in a string
 *
 * @s: pointer to our string array input
 * @c: character to locate from input array
 *
 * Return: first occurence of charatcer or null if not found
 *
 * Return: return null if not found the charcter
*/

char *_strchr(char *s, char c)
{
	while ([i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	/**
	 * if c is '\0', you should return
	 * the pointer to the '\0' of the
	 * string s
	*/
	if (c == '\0')
		return (s);
	/*return null if not found*/
	return ('\0');
}
