#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * Description: c program
 *
 * main - Entry point
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n>0)
		{printf(" %i is positive", n);}
	else if(n==0)
		{printf(" %i is zero", n);}
	else
		{printf(" %i is negative", n);}
	return (0);
}
