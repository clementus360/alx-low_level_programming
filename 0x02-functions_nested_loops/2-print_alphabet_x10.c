#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: prints 10 times the alphabet, in lowercase
 * Return: 0
 */

int print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}

		_putchar('\n');

	}


}
