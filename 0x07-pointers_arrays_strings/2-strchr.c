#include "main.h"

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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}




