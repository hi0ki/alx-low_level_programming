#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0){
		printf("%dis positive\n");
	}
	if (n < 0){
		printf("%dis negative\n");
	}
	else{
		printf("%dis zero\n");

	returon (0);
}
