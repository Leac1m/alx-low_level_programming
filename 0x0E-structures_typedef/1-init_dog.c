#include "dog.h"
/**
 * init_dog - initialize a variable
 * of type struct dog.
 * @d: struct name
 * @name:name input
 * @age: age input
 * @owner: owner input
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
<<<<<<< HEAD
	}
=======
	
>>>>>>> refs/remotes/origin/master
}
