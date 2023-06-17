#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Assigns a random number to the variable n and
 *              prints whether the number is positive, zero, or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d ", n);  /* Modified to match the expected output */

	if (n > 0)
	{
		printf("is positive\n");  /* Added newline character */
	}
	else if (n < 0)  /* Modified condition to check for negative */
	{
		printf("is negative\n");  /* Added newline character */
	}
	else
	{
		printf("is zero\n");  /* Added newline character */
	}

	return (0);
}
