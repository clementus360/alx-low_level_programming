#include "main.h"
/**
 * _isalpha - Entry point
 * @c: The character to check
 * Description: checks for alphabetic character
 * Return: 0
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
