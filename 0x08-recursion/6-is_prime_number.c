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
	return (checker_prime(n, test));
}

/**
* checker_prime - returns the 1 if n is prime
* @n: number to be checked
* @test: number to start checking from
*
* Return: 1 if n is prime, 0 otherwise
*/

int checker_prime(int n, int test)
{
	if (n % test == 0)
		return (0);
	return (checker_prime(n, test - 1));
}
