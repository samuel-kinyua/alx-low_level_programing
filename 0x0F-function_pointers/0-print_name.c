#include "function_pointers.h"
#include <stddef.h>

/**
  *print_name - function name
  *@name: parameter passed
  *@f: function
  *
  *Return: void pointer
  */

void print_name(char *name, void (*f)(char *))
{
	

	if (name == NULL || f == NULL)

		return;

	f(name);

}
