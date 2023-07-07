#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments passed
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: This program prints its name, followed by a new line.
 * If the program is renamed, it will still print the new name without
 * having to recompile it. The program retrieves its name using argv[0].
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
