#include <stdio.h>
/**
 * main - prints base 16
 * Return: Always 0
 */

int main(void)
{
	int n = '0';
	char ch = 'a';

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
