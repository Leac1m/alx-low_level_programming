#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - funtion that frees new_dog's funtion.
 * @d: address of new_dog result.
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
