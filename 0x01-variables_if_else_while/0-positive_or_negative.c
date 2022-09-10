#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*main - Entry point*/
/* the program idetifies whether a number is -ve ore =+v*/
/*return: Always 0  (succuss)*/

int main(void)

{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf(" %d is_negative \n", n);
	else if (n == 0)
		printf(" %d is zero\n", n);
	else
		printf(" %d is positive \n", n);

	return (0);

}
