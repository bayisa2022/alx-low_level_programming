#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * Main - give the random number to variable
 *
 * if number greater zero -positive if not negative  else zero and followed by new line
 * return: 0  if  successful
 */
int main(void)
{
int n;

srand(time(0));

n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n < 0)
{
	printf("%d is negative\n", n);
}
else
{
	printf("%d is zero\n", n);
}
	return (0);
}

