#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bob;
	char *cname, *cowner;
	int len1, len2, j;

	bob = malloc(sizeof(dog_t));
	if (!bob)
		return (NULL);
	for (len1 = 0; name[len1]; len1++)
		;
	for (len2 = 0; owner[len2]; len2++)
		;
	len1++;
	len2++;
	cname = malloc(len1);
	if (!cname)
	{
		free(bob);
		return (NULL);
	}
	cowner = malloc(len2);
	if (!cowner)
	{
		free(cname);
		free(bob);
		return (NULL);
	}
	for (j = 0; j < len1; j++)
		cname[j] = name[j];
	for (j = 0; j < len2; j++)
		cowner[j] = owner[j];

	bob->name = cname;
	bob->owner = cowner;
	bob->age = age;

	return (bob);
}
