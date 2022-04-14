#include "main.h"
/**
 * print_line - Entry point
 * @n: number input
 * Description: draws a straight line in the terminal
 * Return: void
 */

void print_line(int n)
{

	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');

}
