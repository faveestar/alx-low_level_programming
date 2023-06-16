#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: 0 to indicate successful execution.
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
