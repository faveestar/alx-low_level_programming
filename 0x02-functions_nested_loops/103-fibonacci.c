#include <stdio.h>

/**
 * sum_even_fibonacci - Calculates and prints the sum of even-valued terms.
 * @limit: The limit of the Fibonacci terms.
 *
 * Return: The sum of even-valued terms.
 */
unsigned long sum_even_fibonacci(unsigned long limit)
{
	unsigned long sum = 0;
	unsigned long first = 1;
	unsigned long second = 2;
	unsigned long next;

	while (first <= limit)
	{
		if (first % 2 == 0)
		{
			sum += first;
		}

		next = first + second;
		first = second;
		second = next;
	}

	return (sum);
}

/**
 * main - Entry point of the program.
 *
 * Return: 0 on successful execution.
 */
int main(void)
{
	unsigned long limit = 4000000;
	unsigned long sum = sum_even_fibonacci(limit);

	printf("%lu\n", sum);

	return (0);
}
