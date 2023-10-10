#include "main.h"

/**
 *main - entry point
 *
 * print_alphabet - print alphapets
 *
 * Return: Always 0 (success)
*/

void print_alphabet(void);
int main(void)
{
	int ch;

	for (ch = 'a' ; ch < 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
	return (0);
}

