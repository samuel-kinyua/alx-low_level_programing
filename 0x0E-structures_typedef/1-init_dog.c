#include "dog.h"

/**
  *init_dog - intitalizes var of type struct dog
  *@d: pointer to the struct
  *@name: pointer to name of dog
  *@age: age of dog
  *@owner: pointer to owner of dog
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
