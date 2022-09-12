#include <stdio.h>
/**
 * main - this is the entry point
 * Return: Always 0 to show that it excecuted successfully
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}

	putchar('\n');
	return (0);

}
