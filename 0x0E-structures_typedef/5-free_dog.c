#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory of struct
 * @d: memory freed
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
