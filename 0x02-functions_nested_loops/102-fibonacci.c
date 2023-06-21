#include <stdio.h>

/**
 * print_fibonacci - Prints the first n Fibonacci numbers.
 * @n: The number of Fibonacci numbers to print.
 */
void print_fibonacci(int n)
{
	long long first = 1;
	long long second = 2;
	long long next;
	int i;

	printf("%lld, %lld", first, second);

	for (i = 3; i <= n; i++) {
		next = first + second;
		printf(", %lld", next);
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
	return 0;
}

