#include "main.h"

/**
 * print_most_numbers - print nnumbers
 * ecept 2 and 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if ((i == '2') || (i == '4'))
		{
			continue;
		}
		/*_putchar(i);*/
	i++;
	_putchar('\n');
	}

}
