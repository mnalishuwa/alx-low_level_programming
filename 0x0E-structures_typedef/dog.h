#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure to store details about dog
 * @name: string to hold dog's name
 * @age: float to hold dog's age
 * @owner: str member to hold dog owner's name
 *
 * Description: Data structure to hold pet dog details
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* init_dog - initializes a dog struct with values passed */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* print_dog - prints members of the dog structure */
void print_dog(struct dog *d);

/* dog_t - type_def for dog structure */
typedef struct dog dog_t;

/* new_dog - creates a new dog struct */
dog_t *new_dog(char *name, float age, char *owner);

/* free_dog - frees memory allocated for dog struct */
void free_dog(dog_t *d);

#endif
