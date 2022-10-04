#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

#include <stdio.h>
#include <stdlib.h>
/**
  *_strlen - counts and returns string length
  * @s: that's the string
  *
  * Return: the length
  */
int _strlen(char *s)
{
int counter = 0;
if (!*s)
        return (0);
while (*s)
{
        counter++;
        s++;
}
return (counter);
}

