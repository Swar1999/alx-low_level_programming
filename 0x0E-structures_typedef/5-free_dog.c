#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - main entry
 * description : program that free all structurse
 * @d : pointer
 * return : always 0 (success)
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
