#include "main.h"

/**
  *_puts_recursion - prints a string using recursion
  *@s: string to be printed
  *
  *Return: nothing
  */

void _puts_recursion(char *s)
{
	int i = 0;

	for (i = 0; i != '\0'; i++)
	{	if (i == '\0')
		{	
			return;
		}
		_putchar (s[i]);
	}
	_putchar ('\n');


}
