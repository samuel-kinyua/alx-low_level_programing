#include "main.h"

/**
 * swap_int - interchanges the values of int
 *
 * @a: first int value
 * @b: second int value
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;

}
