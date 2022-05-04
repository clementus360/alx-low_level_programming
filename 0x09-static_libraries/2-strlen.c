#include "main.h"
/**
 * _strlen - Entry point
 * @s: pointer input
 * Description: returns the length of a string
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
