#include "main.h"

/**
  *malloc_checked - allocts memory with malloc
  *@b: number of bytes
  *
  *Return: void pointer
  */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));

	if (ptr == NULL)
		exit(98);
	else
		return (ptr);


}
