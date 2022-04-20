#include "main.h"
/**
 * print_rev - Entry point
 * @s: pointer input
 * Description:  prints a string, followed by a new line
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}


	_putchar('\n');

}
