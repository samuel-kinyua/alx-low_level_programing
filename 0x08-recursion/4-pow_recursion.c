#include "main.h"

/**
  *_pow_recursion - returns value of x raised to power of y
  *@x: value to be raised
  *@y: power to be raised to
  *
  *Return: -1 when y is < 0
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);

	}
	else if (y == 0)
	{
		return (1);

	}
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
