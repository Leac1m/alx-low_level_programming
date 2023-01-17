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
} dog;
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
#endif
