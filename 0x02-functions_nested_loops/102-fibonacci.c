#include <stdio.h>

void print_fibonacci(int n) {
	int first = 1;
	int second = 2;
	int next;
	int i;

	printf("%d, %d", first, second);

	for (i = 3; i <= n; i++) {
		next = first + second;
		printf(", %d", next);
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
int main(void) {
	print_fibonacci(50);
	return 0;
}
