#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
char **strtow(char *str) 
 { 
         char **dest; 
         int wordcount, onword = 0, wordsize; 
         int i, j, w; 
  
         if (str == NULL || str[0] == '\0') 
                 return (NULL); 
  
         wordcount = get_wordcount(str); 
         if (!wordcount) 
                 return (NULL); 
  
         dest = malloc(sizeof(char *) * (wordcount + 1)); 
         if (dest == NULL) 
                 return (NULL); 
         dest[wordcount] = NULL; 
  
         for (i = 0; str[i]; i++) 
         { 
                 if (str[i] == ' ') 
                         continue; 
                 for (j = i; str[j] && str[j] != ' '; j++) 
                         ; 
                 wordsize = j - i; 
                 dest[onword] = malloc(sizeof(char) * (wordsize + 1)); 
                 if (dest[onword] == NULL) 
                 { 
                         freememc(dest); 
                         return (NULL); 
                 } 
                 for (w = 0; str[i] && str[i] != ' '; i++, w++) 
                         dest[onword][w] = str[i]; 
                 dest[onword][w] = '\0'; 
  
                 if (!str[i]) 
                         i--; 
                 onword++; 
         } 
         return (dest); 
 } 
  
  
 /** 
  * freememc - frees the memory of an array of pointers pointing to arrays 
  * @d: pointer to first pointer in array 
  */ 
 void freememc(char **d) 
 { 
         int i; 
  
         for (i = 0; d[i] != NULL; i++) 
         { 
                 free(d[i]); 
         } 
         free(d); 
 } 
  
 /** 
  * get_wordcount - gets the number of words in a string with space separators 
  * @c: pointer to the first character in the string 
  * 
  * Return: Number of words in the string 
  */ 
 int get_wordcount(char *c) 
 { 
         int i, count = 0; 
  
         for (i = 0; c[i]; i++) 
         { 
                 if (c[i] != ' ') 
                 { 
                         count++; 
                         for (; c[i] && c[i] != ' '; i++) 
                                 ; 
                 } 
                 if (!c[i]) 
                         c--; 
         } 
  
         return (count); 
 }
