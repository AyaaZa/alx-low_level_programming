#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: 0 on success
 */

int main(void)
{
int i;

for (i = '0'; i <= '9'; i++)
	putchar(i);
putchar('\n');
return (0);
}
