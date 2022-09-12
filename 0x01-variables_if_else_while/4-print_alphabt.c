#include <stdio.h>
/**
 * main - this the entry point
 * Return: Always 0 to show program ran succesuflly
 */

int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if ((lower != 'e') && (lower != 'q'))
		{
			putchar(lower);
		}
	lower++;
	}
	putchar('\n');
	return (0);


}
