#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of times.
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    int row, column, product;

    for (row = 0; row <= n; row++)
    {
        for (column = 0; column <= n; column++)
        {
            product = row * column;

            if (column != 0)
                _putchar(',');

            /* Print spacing and product */
            if (product < 10)
            {
                _putchar(' ');
                _putchar(' ');
                _putchar(product + '0');
            }
            else if (product < 100)
            {
                _putchar(' ');
                _putchar((product / 10) + '0');
                _putchar((product % 10) + '0');
            }
            else
            {
                _putchar((product / 100) + '0');
                _putchar(((product / 10) % 10) + '0');
                _putchar((product % 10) + '0');
            }
        }
        _putchar('\n');
    }
}
