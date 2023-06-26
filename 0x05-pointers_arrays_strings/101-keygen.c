#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for 101-crackme.
 *
 * Return: 0 on success.
 */
int main(void)
{
	char password[12];
	int i, ascii;

	srand(time(0)); // Initialize random number generator based on current time

	for (i = 0; i < 11; i++)
	{
		// Generate a random ASCII value between 33 and 126 (inclusive)
		ascii = rand() % (126 - 33 + 1) + 33;

		// Assign the character to the password array
		password[i] = (char)ascii;
	}

	password[11] = '\0'; // Add the null terminator at the end of the password

	printf("%s\n", password); // Print the generated password

	return (0);
}
