#include "lists.h"
#include <stdio.h>
void sos(void)__attribute__((constructor));
/*this line is used to call the function auto in the main*/
/**
 * sos - function that print sentence automatically
 * Return : nothing
 */
void sos(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
