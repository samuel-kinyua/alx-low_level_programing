#include "main.h"

/**
  * factorial - finds the factorial of a number
  *@n: number to check fctorial
  *
  *Return: -1 to show error when number is less than 0
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));

}
