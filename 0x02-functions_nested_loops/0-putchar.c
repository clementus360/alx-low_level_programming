#include "main.h"
/**
 * main - main block
 * Description: print out "_putchar"
 * Return: 0
 */

int main(void)
{
	char a[9] = "_putchar";

	int i = 0;
	while (i < 9)
	{
	_putchar(a[i]);
	i++;
	}
	_putchar('\n');

	return (0);
}
