#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - Function that creates a new dog
 * @name: First element
 * @age: Second element
 * @owner: Third element
 * Return: newdog created
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int len_name = strlen(name);
	int len_owner = strlen(owner);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(sizeof(char) * (len_name + 1));
	newdog->owner = malloc(sizeof(char) * (len_owner + 1));

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}

	strcpy(newdog->name, name);
	strcpy(newdog->owner, owner);
	newdog->age = age;
	return (newdog);
}
