#include "main.h"

/**
  *_sqrt - returns the square root of number
  *@n: number to check for square root
  *@y: buffer
  *
  *Return: square root of n
  */

int _sqrt(int n, int y)
{
	if (n < 1)
	{
		return (1);

	}
	else if (n < 0 || n == 0)
	{
		return (-1);

	}
	else if (n == y * y)
	{
		return (y);
	}
	else
		return (_sqrt(n, y + 1));

}
/**
  *_sqrt_recursion - returns to main program in _sqrt()
  *@n: number
  *
  *Return: an int
  */
int _sqrt_recursion(int n)

{
	return (_sqrt(n, 1));
}
