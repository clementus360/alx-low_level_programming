#include <unistd.h>
/**
 * _putchar - writes the character c
 * @c: The character to print
 * Description: print out th character c
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
