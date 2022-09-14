#include "main.h"
/**
 *print_last_digit - prints the last digit of a num
 *
 * @n: this is num to be checked
 * Return: 0 always when succesful
 */

int print_last_digit(int n)
{
	last_digit = n % 10;
	if (last_digit n < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');
	return (last_digit);
}
