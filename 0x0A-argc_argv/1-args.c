#include "main.h"
#include <stdio.h>

/**
  *main - returns the arguements passesd
  *@argc: number of arguments
  *@argv: pointer to array of arguments
  *
  *Return: 0 when successful
  */


int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc > 0)
		printf("%d", argc);

	return (0);

}
