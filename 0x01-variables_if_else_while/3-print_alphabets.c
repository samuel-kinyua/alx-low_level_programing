#include <stdio.h>
/**
*main - its the entry point
*Return: Always 0 to show success
*/

int main(void)
{
	char alph = 'a';
	char ABET = 'A';

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	for (ABET = 'A'; ABET <= 'Z'; ABET++)
		putchar(ABET);

	putchar('\n');
	return (0);
}
