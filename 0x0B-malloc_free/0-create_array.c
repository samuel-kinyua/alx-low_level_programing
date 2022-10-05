#include "main.h"
#include <stdlib.h>

/**
  * create_array - creats array
  *@size: size of array
  *@c: character
  *
  *Return: pointer to array on success
  *null when == 0 or fails
  */

char *create_array(unsigned int size, char c)
{
	char *array_alloc = malloc(sizeof(char));
	int n;

	if (array_alloc == NULL || size == 0)
		return (NULL);

	for (n = 0; n < size; n++)
		array_alloc[n] = c
	return (array_alloc);

}

