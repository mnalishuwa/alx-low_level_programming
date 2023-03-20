#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog struct
 * Description: creates a new dog struct using the parameters as members
 *
 * @name: str, dog member name
 * @age: float, dog age member
 * @owner: str, dog owner member name
 *
 * Return: dog_t, struct of type dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(struct dog));
	/* check if allocation successful */
	if (!d)
		return (NULL);

	/* Assign arguments to member variables */
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
