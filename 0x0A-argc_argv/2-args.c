#include "main.h"
#include <stdio.h>

/**
  *main - prints all arguments passed to it
  *@argc: counter of arguaments
  *@argv: pointer to the passed arguments strings
  *
  *Return: always 0 when succesfull
  */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc > i)
		printf("%s\n", argv[i++]);

	return (0);


}
