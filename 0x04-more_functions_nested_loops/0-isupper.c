#include "main.h"

/**
 * _isupper - checks for Uppercase Characters,
 * @c: char to be checked,
 *
 * Return: 1 if character is uppecase or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
