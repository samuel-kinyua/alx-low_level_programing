#include <stdio.h>
/**
 * main - this is the entry point
 * Return: Always  0 to show it excuted successfully
 */


int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
