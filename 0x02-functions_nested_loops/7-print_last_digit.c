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
