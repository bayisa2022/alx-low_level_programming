#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**

 * hare - Prints a string before the

 *        main function is executed.

 */

void hare(void)

{

	printf("You're beat! and yet, you must allow,");

	printf("\nI bore my house upon my back!\n");

}
