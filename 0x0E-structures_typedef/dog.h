#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Short description
 * @name:name input
 * @age: age input
 * @owner: owner input
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/**
 * init_dog - initialize a variable
 * of type struct dog.
 * @d: struct name
 * @name:name input
 * @age: age input
 * @owner: owner input
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * print_dog - prints struct dog
 * @d: struct dog address.
 */
void print_dog(struct dog *d);
/**
 * new_dog - funtion that creates a new dog.
 * @name: name input.
 * @age: age input.
 * @owner: owner input.
 * Return: name and owner, otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner);
/**
 * free_dog - funtion that frees
new_dog's funtion.
 * @d: address of new_dog result.
 */
void free_dog(dog_t *d);
#endif
