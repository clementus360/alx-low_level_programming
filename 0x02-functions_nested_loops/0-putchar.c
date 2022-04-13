#include "main.h"
/**
 * main - main block
 * Description: print out "_putchar"
 * Return: 0
 */

int main(void)
{
	char a[] = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		_putchar(a[i]);
	}

	_putchar('\n');

	return (0);
}
