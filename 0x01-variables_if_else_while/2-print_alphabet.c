#include <stdio.h>

/**
 * main -main fuction 
 * Description:program that prints the alphabet in lowercase, followed by a new line
 * You can only use the putchar
 * Return: 0
 */
int main(void)
{
	char c;
	for (c = "a";c <= 'z';c++)
		putchar(c);
	putchar("\n");
	return (0);
}
