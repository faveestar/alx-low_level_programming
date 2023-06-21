#include <stdio.h>

/**
 * print_fibonacci - Prints the first n Fibonacci numbers.
 * @n: The number of Fibonacci numbers to print.
 */
void print_fibonacci(int n)
{
	unsigned long first = 1;
	unsigned long second = 2;
	unsigned long next;
	int i;

	printf("%lu, %lu", first, second);

	for (i = 3; i <= n; i++)
	{
		next = first + second;
		printf(", %lu", next);
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
	print_fibonacci(50);
	return (0);
}
