#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: value
 * Return: void
 */

void print_times_table(int n)

{
int i, j, k;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
	{
	k = i * j;
	if (j == 0)
	{
	_putchar(k + '0');
	}
	else if (k < 10 && j != 0)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar(k + '0');
	}
	else if (k >= 10 && k < 100)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar((k / 10) + '0');
	_putchar((k % 10) + '0');
	}
	else if (k >= 100 && k < 1000)
	{
	_putchar(',');
	_putchar(' ');
	_putchar((k / 100) + '0');
	_putchar(((k / 10) % 10) + '0');
	_putchar((k % 10) + '0');
	}
	else if (k >= 1000 && k < 10000)
	{
	_putchar(',');
	_putchar((k / 1000) + '0');
	_putchar(((k / 100) % 10) + '0');
	_putchar(((k / 10) % 10) + '0');
	_putchar((k % 10) + '0');
	}
	}
_putchar('\n');
}
}
