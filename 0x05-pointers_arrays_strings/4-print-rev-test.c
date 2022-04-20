#include "main.h"
#include "_putchar.c"
#include <stdio.h>
/**
 * print_rev - Entry point
 * @s: pointer input
 * Description:  prints a string, followed by a new line
 * Return: void
 */

void main()
{
	char s[] = "my school";

	int i = 0;

	while (s[i])
	{
		i++;
	}

	char temp[i+1];
	int a = 0;

	while (i >= 0)
	{
		temp[a] = s[i];
		i--;
		a++;
	}


	printf("%c", temp[0]);

	_putchar('\n');

}
