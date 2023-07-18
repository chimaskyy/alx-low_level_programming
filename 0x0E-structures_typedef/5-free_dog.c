#include <stdlib.h>
#include "dog.h"


/**
 * free_dog - Function to free dogs
 * @d: pointer to dog elements
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
