#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  Entry point
 *@size: unsigned int.
 *@c: char.
 * Return: Always 0.
 */
 
 char *create_array(unsigned int size, char c)
 {
	 char *array;
	 unsigned int index;
	 
 if (size ==0)
	 return (NUll);
 array =malloc(sizeof(char)*size);
 if (array == NUll)
	 return (NUll);
 for (index =0;index <size;index++)
	 array[index] =c;
 return(array);
 
}
