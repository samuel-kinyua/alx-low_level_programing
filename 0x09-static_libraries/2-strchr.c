#include "main.h"
#define NULL 0

/**
  *_strchr - searches for achar in string
  *@c: char to be checked for in string
  *@s: string where to search
  *
  *Return: string if present Null when not.
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c) /* find match */

		i++;

	if (s[i] == c) /* if match, assign to address */
		return (&s[i]);
	else
		return (NULL);
}




