#include "main.h"

/**
 * _isdigit - checks whether a character is a digit (0-9).
 * @c: The character to be checked.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	/* Check if c is in the range of digit ASCII values */
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
