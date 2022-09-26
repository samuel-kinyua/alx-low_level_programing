#include "main.h"

/**
  * _memset - filles memory location.
  *@b: the character to be fillled in the memory location.
  *@s: memory location to be filled
  *@n: the number of time it is going to be filled.
  *Return: s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (1 = 0; i < n; i++)

		s[i] = b;
	return (s);
}
