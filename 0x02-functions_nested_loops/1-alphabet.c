#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: prints the alphabet, in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');

	return (0);
}
