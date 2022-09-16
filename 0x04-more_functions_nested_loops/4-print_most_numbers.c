#include "main.h"

/**
 * print_most_numbers - print nnumbers
 * ecept 2 and 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i;

	for (n = '0'; n < '9'; i++)
	{
		if ((i == '2') || (i == '4'))
		{
			continue;
		}
		_putchar(i);
	_putchar(10);
	}

}
