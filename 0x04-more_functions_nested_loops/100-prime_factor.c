#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @num: The number to find the largest prime factor for
 *
 * Return: The largest prime factor of the number
 */
long int largest_prime_factor(long int num)
{
	long int i;

	while (num % 2 == 0)
	{
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			num /= i;
		}
	}

	if (num > 2)
	{
		return (num);
	}
	else
	{
		return (i - 2);
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int number = 612852475143;
	long int largest_factor;

	largest_factor = largest_prime_factor(number);

	printf("%ld\n", largest_factor);

	return (0);
}
