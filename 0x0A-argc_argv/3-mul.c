#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - multiplys two arguments
  *@argc: countet of the arguments
  *@argv: two numbers to be multiplied
  *
  *Return: 0 on success and one where thers on aurgument only
  */

int main(int argc, char *argv[])
{
	int result = 0;

	if (argc != 3)

		printf("Error\n");

	return (1);

	result = *argv[1] * *argv[2];
		printf("%d\n", result);
	return (0);
}
