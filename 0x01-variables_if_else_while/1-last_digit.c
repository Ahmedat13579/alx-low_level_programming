#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: a c prog
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n, ln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ln = n % 10;
	printf("Last digit of %i is %i ", n, ln);
	if (ln > 5)
		{printf("and is greater than 5\n"); }
	else if (ln == 0)
		{printf("and is 0\n"); }
	else if (ln < 6 && n != 0)
		{printf("and is less than 6 and not 0\n"); }

	return (0);
}
