#include "function_pointers.h"
/**
  *print_name - function name
  *@name: parameter passed
  *@f: function
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);

}
