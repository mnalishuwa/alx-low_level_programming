#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees the memory allocated for a dog struct
 * Description: takes a pointer to a dog struct and frees the memory
 *
 * @d: pointer to dog struct
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
