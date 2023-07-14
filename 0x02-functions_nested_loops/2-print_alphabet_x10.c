#include "main.h"

/**
 * the alphabet fonction
 *
 * return void
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;
	i = 10;

	while(i <= 10)
	{
		for(ch = 'a'; ch <= 'z'; ch++)
		{
			_printf(ch);
		}
	_putchar('\n');
	i++;
	}
}
