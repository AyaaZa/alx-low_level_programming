#include <stdio.h>

/**
 * main - print comb
 *
 * Return: 0 on success
 */

int main(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
	if (i == 9)
	putchar(i);
	else
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
}
return (0);
}
