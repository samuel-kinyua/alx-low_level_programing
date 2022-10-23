#include "main.h"

/**
 * _isdigit -function to check if num is int 0-9
 *
 * @c: the int to be checked
 *
 * Return: 1 if is between 0-9
 * 0 if not
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
