#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string.
 *
 * Return: None.
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	int start;

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Calculate the starting index based on string length */
	start = length / 2;
	if (length % 2 != 0)
	{
		start++;
	}

	/* Print the second half of the string */
	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
