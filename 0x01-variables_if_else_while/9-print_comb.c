#include <stdio.h>
/**
 * main - prints single char numers separed with a comma and spaced
 *Return: Always 0 to show it is succesful
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)

	{

		putchar(n);

		if (n != 57)

		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
