#include "main.h"

/**
 *_strlen - gets the lengt f a string
 *
 * @s: string
 *Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);

}
