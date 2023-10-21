#include "dog.h"
#include <stdlib.h>
/**
* init_dog - main entry
*description : function that initialize structur
* @d :struct type
* @name :char
* @age :float
* @owner :char
* return : always 0 (success)
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)/*not exist*/
		d = malloc(sizeof(struct dog));/*reserve a space*/
	d->name = name;
	d->age = age;
	d->owner = owner;
}
