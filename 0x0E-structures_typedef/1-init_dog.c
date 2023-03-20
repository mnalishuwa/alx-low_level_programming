#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a struct of type dog
 * Description: receives a dog struct then initializes
 * members name, age, and owner with the parameters passed
 *
 * @d: pointer to struct
 * @name: str to initialize name member
 * @age: float, to initialize age member
 * @owner: str, to initilize owner member
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
