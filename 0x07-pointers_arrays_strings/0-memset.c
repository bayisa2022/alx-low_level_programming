#include "main.h"
#include <stdio.h>

/**
 *_memset-fill function fills the first n bytes of the memory area pointed
 * with the constant byte b
 *Returns a pointer to the memory area s
 */

char *__memset(char *s,char b,unsigned int n)
{
    while (n)
    {
        s[n-1]=b;
        n--;
    }
    return(s)
}
