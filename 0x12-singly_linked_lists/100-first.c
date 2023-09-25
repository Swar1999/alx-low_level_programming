#include "lists.h"
#include <stdio.h>
void a(void)__attribute__((constructor));
/*used so the function can be auto called*/
/**
 * a - print the sentence before main function
 * Return : nothing
 */
void a(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
