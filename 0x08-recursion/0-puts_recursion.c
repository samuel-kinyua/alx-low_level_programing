#include "main.h"

/**
  *_puts_recursion - prints a string using recursion
  *@s: string to be printed
  *
  *Return: nothing
  */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;

	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}

	_putchar('\n');
}
