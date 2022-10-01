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
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);

	return (0);
}
