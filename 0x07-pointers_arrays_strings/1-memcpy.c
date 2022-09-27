#include "main.h"

/**
  *_memcpy - copys a memory location
  *@n: number of  bytes too be coopied
  *@src: where the bytes are copied from
  *@dest: where the bytes are copied to.
  *
  *Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
