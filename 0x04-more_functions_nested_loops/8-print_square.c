#include "main.h"

/**
 * print_square - Entry point
 * @size: number input
 * Description: prints a square
 * Return: void
 */

void print_square(int size)
{
	int a, b;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			_putchar('#');
		}

		_putchar('\n');

	}

	if (a == 1)
		_putchar('\n');

}
