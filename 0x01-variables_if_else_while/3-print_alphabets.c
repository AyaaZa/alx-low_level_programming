#include <stdio.h>

/**
 * main - small and capital letters
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
	putchar(i);
	putchar('\n');
	return (0);
}
