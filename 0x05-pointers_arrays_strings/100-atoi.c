#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s : string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i, d, sign, result, len;

	i = 0;
	d = 0;
	sign = 0;
	result = 0;
	len = 0;
	while (s[len])
	{
		len++;
	}
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			d++;
		if (s[i] >= '0' && s[i] <= '9')
		{
		sign = s[i] - 48;
		if (d % 2 == 1)
			sign = -sign;
		result = result * 10 + sign;
		if (s[i + 1] < '0' || s[i + 1] > '9')
			return (result);
		}
		i++;
	}
	return (0);
}
