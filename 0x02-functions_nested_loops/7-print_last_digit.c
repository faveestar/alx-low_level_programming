#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = _abs(n % 10);
	_putchar(lastDigit + '0');

	return (lastDigit);
}

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
