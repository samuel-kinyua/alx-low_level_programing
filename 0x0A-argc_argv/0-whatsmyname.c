#include "main.h"
#include <stdio.h>
/**
  *main - prints name of program
  *@argc: counts number of argumments
  *@argv: pointer to array of arguments
  *Return: always 0 when succesful
  */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s \n", argv[0]);
	}
	return (0);
}
