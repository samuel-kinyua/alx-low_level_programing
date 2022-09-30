#include "main.h"
#include <stdio.h>

/**
  *main - returns the arguements passesd
  *@argc: number of arguments
  *@argv: pointer to array of arguments
  *
  *Return: 0 when successful
  */


int main(int argc, char *argv[]__attribute__((unused)))
{
	if (argc > 0)
		printf("%d", argc -1);

	return (0);

}
