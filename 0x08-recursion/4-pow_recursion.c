#include "main.h"

/**
 * _pow_recursion - valuue of x raised to the power of y
 * @x: int
 * @y: int
 * Return: return to int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (x == 0)
		return (1);
return (x * _pow_pecursion(x, y - 1));
}
