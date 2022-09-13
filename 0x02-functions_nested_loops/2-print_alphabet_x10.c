#include "main.h"

/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char m, n;

	for (n = 0; n <= 9;n++)
	{
		for (m = 'a'; m <='z';m++)
		{ 
			_putchar(m);
		}
		_putchar('\n');
	}
}
