#include "main.h"
/**
 * main - prints out alphabets in order followed by new line
 * Return: Always 0 when successful
 */

void print_alphabet(void)
{
	char c;

	for ( c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
