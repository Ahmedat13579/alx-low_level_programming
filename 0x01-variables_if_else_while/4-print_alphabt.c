#include <stdio.h>

/**
 * main - entry point
 *
 * Descrioption: c prog
 *
 * Return: Always 0 (success)
*/

int main(void)
{
        char ch = 'a';

while (ch <= 'z')
{
	if (ch == 'e' || ch == 'q')
		ch++;
        putchar(ch);
        ch++;
}
putchar('\n');
return (0);
}
