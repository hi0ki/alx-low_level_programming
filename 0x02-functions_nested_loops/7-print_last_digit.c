#include "main.h"

/**
  * print_last_digit - Prints the last digit of a number
  * @n: The number to be treated
  *
  * Return: Value of the last digit of number
  */
int print_last_digit(int n)
{
	int y;

	y = n % 10;

	if (y < 0)
	{
		y = y * -1;
	}

	_putchar(y + '0');

	return (y);
}
