#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  *_strdup - returns pointer not new space allocated
  *@str: pointer whose address is returned
  *
  *Return: pointer
  */

char *_strdup(char *str)
{
	int size = 0;
	char *strCopy;

	if (str == NULL)

		return (NULL);

	for (; str[size] != '\0'; size++)

	strCopy = malloc(size * sizeof(*str) + 1);

	if (strCopy == 0)

		return (NULL);

	strcpy(strCopy, str);
	return (strCopy);
}
