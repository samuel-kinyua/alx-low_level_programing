#include <stdio.h>
/**
*main - its the entry point
*Return: Always 0 to show success
*/

int main(void)
{	
	char alph = 'a';
	char ABET = 'A';

	while (alph <= 'z' && ABET <= 'Z')
	{	
		putchar(alph && ABET);
			alph++;
			ABET++;
	}

	putchar('\n');
	return (0);
}
