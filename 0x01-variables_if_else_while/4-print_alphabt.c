#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: 0 to indicate successful execution.
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase != 'q' && lowercase != 'e')
		{
			putchar(lowercase);
		}
	}

	putchar('\n');

	return (0);
}
