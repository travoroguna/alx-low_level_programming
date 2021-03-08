#include "holberton.h"
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog
 * @d: pointer to dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name != NULL ? d->name : "(nill)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nill)");
}
