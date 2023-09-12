#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - main entry
 * description : function that print the struct elements
 * @d : pointer to initilize the struct
 * return : always 0 (success)
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
