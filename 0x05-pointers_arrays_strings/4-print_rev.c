#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_rev - prints srings in reverse
 *
 * @s: string to be reversed
 *Return: nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
	{
		puchar(*(s + len));

	putchar(10);
	}
}
