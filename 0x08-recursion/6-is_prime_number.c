#include "main.h"
/**
* is_prime_number - returns true if the number is prime
*@n: the number to check
*
*Return: true if the number is prime
*/
int is_prime_number(int n)
{
	int test = n / 2;

	if (n <= 1)
		return (0);
	return (prime_checker(n, test));
}

/**
* prime_checker - returns the 1 if n is prime
* @n: number to be checked
* @test: number to start checking from
*
* Return: 1 if n is prime, 0 otherwise
*/

int prime_checker(int n, int test)
{
	else if (n % test == 0)
		return (0);
	return (prime_checker(n, test - 1));
}
