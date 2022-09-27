#include "main.h"

/**
  *_strchr - searches for achar in string
  *@c: char to be checked for in string
  *
  *Return: string if present Null when not.
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; i < '\0'; i++)
	{
		if (c == i && c != '\0')
		{
			return (s);
		}
		else
			return ('\0');
	}

}




