#include <stdio.h>
/**
 * main - prints single char numers separed with a comma and spaced
 *Return: Always 0 to show it is succesful
 */

int main(void)
{
	int n = 0;

	while (n <= '9')
	{
		putchar(48 + n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}

	putchar('\n');
	return (0);

}
