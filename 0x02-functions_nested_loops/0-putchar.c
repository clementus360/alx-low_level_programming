#include "main.h"
/**
 * main - main block
 * Description: print out "_putchar"
 * Return: 0
 */

int main(void)
{
	char a[9] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(a[i]);
	}

	_putchar('\n');

	return (0);
}
