#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - funtion that creates a new dog.
 * @name: name input.
 * @age: age input.
 * @owner: owner input.
 * Return: name and owner, otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(sizeof(dog->name) * strlen(name));
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = malloc(strlen(owner) * sizeof(dog->owner));
	if (dog->owner ==  NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner = owner;

	return (dog);
}
