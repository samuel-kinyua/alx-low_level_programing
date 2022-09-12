#include <stdio.h>
/**
 * main - this is the entry point
 *Return: Always 0 to show it executed successfullly
 */


int main(void)
{
	char lc = 'z';

	while (lc >= 'a')
	{
		putchar(lc);
		lc--;
	}
	
	putchar('\n');
	
	return (0);
}
