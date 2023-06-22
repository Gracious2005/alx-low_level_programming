#include <stdlib.h>
#include "dog.h"


/**
* free_dog - clears memory
* @d: structure of dog to clear
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

