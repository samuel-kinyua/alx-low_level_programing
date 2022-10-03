#include "main.h"
/**
 * _isalpha - checks whether c is an alphabet or not
 * @c: is alphabet tobe checked
 * Return: 1 when its an alphabet 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
