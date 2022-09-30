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
	int i;

	if (argc > 0)
	{
		for (i = 0; i != '\0'; i++)
		{
			(void) _putchar(*argv[i]);
			_putchar('\n');

		}
	}
	return (0);
}
