#include "main.h"
/**
 * swap_int - Entry point
 * @a: pointer input
 * @b: pointer input
 * Description: swaps the values of two integers
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int num;
	num = *a;
	*a = *b;
	*b = num;

}
