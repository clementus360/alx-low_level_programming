#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: number input
 * Description: draws a diagonal line on the terminal
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;

	int space;

	while (i < n && n > 0)
	{
		space = 0;

		while (space < i)
			_putchar(' ');

		_putchar('\\$');
		_putchar('\n');
		i++;

	}
	if (i == 0)
		_putchar('\n');

}
