#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the members of the dog structure
 * Description: takes a dog struct and prints out the member details
 *
 * @d: dog structure whose members are to be printed
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	/* use nil if member is null */
	if (!d->name)
		d->name = "(nil)";
	if (!d->owner)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
