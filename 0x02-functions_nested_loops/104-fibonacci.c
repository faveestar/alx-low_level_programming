#include <stdio.h>

/**
 * print_fibonacci - Prints the first n Fibonacci numbers.
 * @n: The number of Fibonacci numbers to print.
 */
void print_fibonacci(int n)
{
	int count;
	unsigned int first = 1;
	unsigned int second = 2;
	unsigned int next;

	printf("%u, %u", first, second);

	for (count = 3; count <= n; count++)
	{
		next = first + second;
		printf(", %u", next);

		first = second;
		second = next;
	}

	printf("\n");
}

/**
 * main - Entry point of the program.
 *
 * Return: 0 on successful execution.
 */
int main(void)
{
	int n = 98;

	print_fibonacci(n);

	return (0);
}
